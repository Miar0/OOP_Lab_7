#include "Menu.h"

int main() {
    Menu *menu = new Menu();
    menu->show_menu();
    delete menu;
    return 0;
}
