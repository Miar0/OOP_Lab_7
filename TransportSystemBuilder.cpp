#include "TransportSystemBuilder.h"
#include "vector"

void TransportSystemBuilder::add_component(const string &tier, const string &component_type, const string &description) {
    if (components.find(tier) == components.end()) {
        components[tier] = ComponentTypeMap{};
    }
    if (components[tier].find(component_type) == components[tier].end()) {
        components[tier][component_type] = ComponentInfo{{"Description", description}, {"Count", 1}};
    } else {
        get<int>(components[tier][component_type]["Count"]) += 1;
    }
}

void TransportSystemBuilder::build_conveyor_belt(TransportSystemFactory *component_factory, const string &tier) {
    const string description = component_factory->create_conveyor_belt()->move_conveyed_item();
    add_component(tier, "Conveyor Belt", description);
}

void TransportSystemBuilder::build_underground_conveyor_belt(TransportSystemFactory *component_factory, const string &tier) {
    const string description = component_factory->create_underground_conveyor_belt()->move_underground_conveyed_item();
    add_component(tier, "Underground Conveyor Belt", description);
}

void TransportSystemBuilder::build_conveyor_splitter(TransportSystemFactory *component_factory, const string &tier) {
    const string description = component_factory->create_conveyor_splitter()->split_conveyed_item();
    add_component(tier, "Conveyor Splitter", description);
}

void TransportSystemBuilder::show_components() {
    if (components.empty()) {
        cout << "Inventory is empty." << endl;
        return;
    }
    cout << "\nInventory:" << endl;
    vector<string> desired_order = {"Base", "Fast", "Express"};
    for (const auto& tier : desired_order) {
        if (components.find(tier) != components.end()) {
            cout << "\n=== Tier: " << tier << " ===" << endl;
            for (const auto& [component_type, details] : components.at(tier)) {
                cout << left
                     << setw(25) << component_type << " | "
                     << setw(20) << get<string>(details.at("Description")) << " | "
                     << "Count: " << get<int>(details.at("Count")) << endl;
            }
        }
    }
}
