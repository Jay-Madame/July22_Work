#pragma once
#include <cstdlib>

class Time
{
private:
    int days, hours, minutes, seconds;

public:
    Time();
    Time(int d, int h, int m, int s);
    Time(int h, int m, int s);
    Time(int h, int m);
    void simplify();
    int getDays() const;
    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;
};
