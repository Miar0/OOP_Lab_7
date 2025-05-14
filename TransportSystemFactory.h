#ifndef TRANSPORTSYSTEMFACTORY_H
#define TRANSPORTSYSTEMFACTORY_H


#include "ConveyorBelt.h"
#include "UndergroundConveyorBelt.h"
#include "ConveyorSplitter.h"

class TransportSystemFactory {
public:
    virtual ~TransportSystemFactory() = default;

    virtual ConveyorBelt *create_conveyor_belt() = 0;

    virtual UndergroundConveyorBelt *create_underground_conveyor_belt() = 0;

    virtual ConveyorSplitter *create_conveyor_splitter() = 0;
};

class BaseTransportSystemFactory : public TransportSystemFactory {
public:
    ConveyorBelt *create_conveyor_belt() override;

    UndergroundConveyorBelt *create_underground_conveyor_belt() override;

    ConveyorSplitter *create_conveyor_splitter() override;
};

class FastTransportSystemFactory : public TransportSystemFactory {
public:
    ConveyorBelt *create_conveyor_belt() override;

    UndergroundConveyorBelt *create_underground_conveyor_belt() override;

    ConveyorSplitter *create_conveyor_splitter() override;
};

class ExpressTransportSystemFactory : public TransportSystemFactory {
public:
    ConveyorBelt *create_conveyor_belt() override;

    UndergroundConveyorBelt *create_underground_conveyor_belt() override;

    ConveyorSplitter *create_conveyor_splitter() override;
};
#endif
