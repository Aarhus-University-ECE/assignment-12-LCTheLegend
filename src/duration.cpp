#include "duration.hpp"
#include "assert.h"

int duration::getduration()
{
    return time;
}

duration::duration() //constructor method
{
    time = 0;
    alarm = 0;
    alarmhasbeenset = false;
}

/*
I have not built a destructor because it is not specified in the assignment
and a built in destructor activates when object goes out of scope
*/

duration::duration(int t)
{
    assert(time >= 0);
    time = t;
} //second constructor method

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
//the two functions above increase time and afterwards check if time>=alarm via function chechAndUpdateAlarm()

void duration::setalarm(int a)
{
    assert(a > time);
    alarm = a;
    alarmhasbeenset = true;
} //set an alarm

bool duration::checkAndUpdateAlarm()
{
    if(time >= alarm)
    {
        alarmhasbeenset = false;
        alarm = 0;
        return true;
    }
    return false;
} //checks if time>=alarm and updates alarm if true