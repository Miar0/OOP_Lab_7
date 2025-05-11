#include "ConveyorBelt.h"

string BaseConveyorBelt::move_conveyed_item() {
    return "15 items/sec";
}

string FastConveyorBelt::move_conveyed_item() {
    return "30 items/sec";
}

string ExpressConveyorBelt::move_conveyed_item() {
    return "45 items/sec";
}
