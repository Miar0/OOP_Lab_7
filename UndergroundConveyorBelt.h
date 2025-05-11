#ifndef UNDERGROUNDCONVEYORBELT_H
#define UNDERGROUNDCONVEYORBELT_H

#include <string>

using namespace std;


class UndergroundConveyorBelt {
public:
    virtual ~UndergroundConveyorBelt() = default;

    virtual string move_underground_conveyed_item() = 0;
};

class BaseUndergroundCConveyorBelt : public UndergroundConveyorBelt {
public:
    string move_underground_conveyed_item() override;
};

class FastUndergroundCConveyorBelt : public UndergroundConveyorBelt {
public:
    string move_underground_conveyed_item() override;
};

class ExpressUndergroundCConveyorBelt : public UndergroundConveyorBelt {
public:
    string move_underground_conveyed_item() override;
};


#endif
