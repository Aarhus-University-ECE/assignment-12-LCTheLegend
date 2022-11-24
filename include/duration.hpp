#ifndef _DURATION_CLASS_H_
#define _DURATION_CLASS_H_

class duration
{
 private:
    int time;

public:
    duration();
    ~duration();
    int getduration();
    duration(int t);
    void tick();

};

#endif