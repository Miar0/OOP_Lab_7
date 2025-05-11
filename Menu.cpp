#include "Menu.h"


string Menu::choose_tier(const string &component_type) {
    while (true) {
        string tier_choice;
        cout << "Choose tier for " << component_type << " (1. Base, 2. Fast, 3. Express):";
        cin >> tier_choice;

        if (tier_choice == "1") {
            return "Base";
        } else if (tier_choice == "2") {
            return "Fast";
        } else if (tier_choice == "3") {
            return "Express";
        } else {
            cout << "Invalid tier choice, please try again." << endl;
        }
    }
}

TransportSystemFactory *Menu::get_factory_by_tier(const string &tier) {
    if (tier == "Base") {
        return new BaseTransportSystemFactory();
    } else if (tier == "Fast") {
        return new FastTransportSystemFactory();
    } else if (tier == "Express") {
        return new ExpressTransportSystemFactory();
    }
}

void Menu::build_component(const string &component_type) {
    cout << "\nBuilding " << component_type << "..." << endl;

    string tier = choose_tier(component_type);
    TransportSystemFactory* factory = get_factory_by_tier(tier);

    if (component_type == "Conveyor Belt") {
        builder->build_conveyor_belt(factory, tier);
    } else if (component_type == "Underground Conveyor Belt") {
        builder->build_underground_conveyor_belt(factory, tier);
    } else if (component_type == "Conveyor Splitter") {
        builder->build_conveyor_splitter(factory, tier);
    }

    cout << "Added " << tier << " " << component_type << " to inventory." << endl;
}

void Menu::show_menu() {
    while (true) {
        cout << "\nWelcome to the Component Builder!\n"
                "Please choose an option:\n"
                "1. Build Conveyor Belt\n"
                "2. Build Underground Conveyor Belt\n"
                "3. Build Conveyor Splitter\n"
                "4. Show Inventory\n"
                "5. Exit\n" << endl;
        string choice;
        cout << "Enter your choice (1/2/3/4/5):";
        cin >> choice;

        if (choice == "1") {
            build_component("Conveyor Belt");
        } else if (choice == "2") {
            build_component("Underground Conveyor Belt");
        } else if (choice == "3") {
            build_component("Conveyor Splitter");
        } else if (choice == "4") {
            builder->show_components();
        } else if (choice == "5") {
            cout << "Exiting..." << endl;
            break;
        } else {
            cout << "Invalid choice, please try again." << endl;
        }
    }
}
