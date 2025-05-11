#include "TransportSystemFactory.h"

// Base Factory
ConveyorBelt *BaseTransportSystemFactory::create_conveyor_belt() {
    return new BaseConveyorBelt();
}

UndergroundConveyorBelt *BaseTransportSystemFactory::create_underground_conveyor_belt() {
    return new BaseUndergroundCConveyorBelt();
}

ConveyorSplitter *BaseTransportSystemFactory::create_conveyor_splitter() {
    return new BaseConveyorSplitter();
}

// Fast factory
ConveyorBelt *FastTransportSystemFactory::create_conveyor_belt() {
    return new FastConveyorBelt();
}

UndergroundConveyorBelt *FastTransportSystemFactory::create_underground_conveyor_belt() {
    return new FastUndergroundCConveyorBelt();
}

ConveyorSplitter *FastTransportSystemFactory::create_conveyor_splitter() {
    return new FastConveyorSplitter();
}

// Express factory
ConveyorBelt *ExpressTransportSystemFactory::create_conveyor_belt() {
    return new ExpressConveyorBelt();
}

UndergroundConveyorBelt *ExpressTransportSystemFactory::create_underground_conveyor_belt() {
    return new ExpressUndergroundCConveyorBelt();
}

ConveyorSplitter *ExpressTransportSystemFactory::create_conveyor_splitter() {
    return new ExpressConveyorSplitter();
}
