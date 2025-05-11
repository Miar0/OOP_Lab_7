#ifndef TRANSPORTSYSTEMBUILDER_H
#define TRANSPORTSYSTEMBUILDER_H

#include <unordered_map>
#include <variant>
#include <iostream>
#include <iomanip>
#include "TransportSystemFactory.h"

using namespace std;

// dict[str, Any]
using ComponentInfo = unordered_map<string, variant<string, int>>;
// dict[str, dict[str, Any]]
using ComponentTypeMap = unordered_map<string, ComponentInfo>;
// dict[str, dict[str, dict[str, Any]]]
using TierMap = unordered_map<string, ComponentTypeMap>;

class TransportSystemBuilder {
protected:
    TierMap components;
    void add_component(const string& tier, const string& component_type, const string& description);

public:
    void build_conveyor_belt(TransportSystemFactory* component_factory, const string& tier);
    void build_underground_conveyor_belt(TransportSystemFactory* component_factory, const string& tier);
    void build_conveyor_splitter(TransportSystemFactory* component_factory, const string& tier);
    void show_components();
};



#endif
