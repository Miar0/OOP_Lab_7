#ifndef CONVEYORSPLITTER_H
#define CONVEYORSPLITTER_H

#include <string>

using namespace std;

class ConveyorSplitter {
public:
    virtual ~ConveyorSplitter() = default;

    virtual string split_conveyed_item() = 0;
};

class BaseConveyorSplitter : public ConveyorSplitter {
public:
    string split_conveyed_item() override;
};

class FastConveyorSplitter : public ConveyorSplitter {
public:
    string split_conveyed_item() override;
};

class ExpressConveyorSplitter : public ConveyorSplitter {
public:
    string split_conveyed_item() override;
};


#endif
