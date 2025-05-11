#ifndef MENU_H
#define MENU_H

#include "TransportSystemBuilder.h"

class Menu {
protected:
    void build_component(const string &component_type);

    static string choose_tier(const string &component_type);

    static TransportSystemFactory *get_factory_by_tier(const string &tier);

public:
    TransportSystemBuilder *builder = new TransportSystemBuilder();

    void show_menu();
};


#endif
