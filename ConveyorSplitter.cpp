#include "ConveyorSplitter.h"

string BaseConveyorSplitter::split_conveyed_item() {
    return "15 items/sec";
}

string FastConveyorSplitter::split_conveyed_item() {
    return "30 items/sec";
}

string ExpressConveyorSplitter::split_conveyed_item() {
    return "45 items/sec";
}
