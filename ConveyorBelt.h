#ifndef CONVEYORBELT_H
#define CONVEYORBELT_H

#include <string>

using namespace std;

class ConveyorBelt {
public:
    virtual ~ConveyorBelt() = default;

    virtual string move_conveyed_item() = 0;
};

class BaseConveyorBelt : public ConveyorBelt {
public:
    string move_conveyed_item() override;
};

class FastConveyorBelt : public ConveyorBelt {
public:
    string move_conveyed_item() override;
};

class ExpressConveyorBelt : public ConveyorBelt {
public:
    string move_conveyed_item() override;
};

#endif
