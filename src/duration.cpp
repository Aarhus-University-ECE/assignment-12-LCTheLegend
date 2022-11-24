#include "duration.hpp"
#include "assert.h"

int duration::getduration()
{
    return time;
}

duration::duration()
{
    time = 0;
    alarm = 0;
    alarmhasbeenset = false;
}

duration::duration(int t)
{
    assert(time >= 0);
    time = t;
}

bool duration::tick()
{
    time++;
    if(time >= alarm)
    {
        alarmhasbeenset = false;
        alarm = 0;
        return true;
    }
    return false;
}

bool duration::tick(int dt)
{
    assert(dt > 0);
    time += dt;
    if(time >= alarm)
    {
        alarmhasbeenset = false;
        alarm = 0;
        return true;
    }
    return false;
}

void duration::setalarm(int a)
{
    alarm = a;
    alarmhasbeenset = true;
}