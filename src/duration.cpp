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
    return checkAndUpdateAlarm();
}

bool duration::tick(int dt)
{
    assert(dt > 0);
    time += dt;
    return checkAndUpdateAlarm();
}

void duration::setalarm(int a)
{
    assert(a > time);
    alarm = a;
    alarmhasbeenset = true;
}

bool duration::checkAndUpdateAlarm()
{
    if(time >= alarm)
    {
        alarmhasbeenset = false;
        alarm = 0;
        return true;
    }
    return false;
}