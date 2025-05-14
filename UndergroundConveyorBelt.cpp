#include "UndergroundConveyorBelt.h"

string BaseUndergroundCConveyorBelt::move_underground_conveyed_item() {
    return "15 items/sec";
}

string FastUndergroundCConveyorBelt::move_underground_conveyed_item() {
    return "30 items/sec";
}

string ExpressUndergroundCConveyorBelt::move_underground_conveyed_item() {
    return "45 items/sec";
}
