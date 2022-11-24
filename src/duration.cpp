#include "duration.hpp"
#include "assert.h"

int duration::getduration()
{
    return time;
};

duration::duration()
{
    time = 0;
};

duration::duration(int t)
{
    assert(time >= 0);
    time = t;
};

void duration::tick()
{
    time++;
}