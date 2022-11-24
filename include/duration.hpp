#ifndef _DURATION_CLASS_H_
#define _DURATION_CLASS_H_

class duration
{
 private:
    int time;
    int alarm;
    bool alarmhasbeenset;

public:
    duration();
    ~duration();
    int getduration();
    duration(int t);
    bool tick();
    bool tick(int dt);
    void setalarm(int a);

};

#endif