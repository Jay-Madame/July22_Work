#include "time.h"

Time::Time() : Time(0, 0, 0, 0)
{
}
Time::Time(int d, int h, int m, int s) : days(d), hours(h), minutes(m), seconds(s)
{
}
Time::Time(int h, int m, int s) : Time(0, h, m, s)
{
}
Time::Time(int h, int m) : Time(0, h, m, 0)
{
}
int Time::getDays() const
{
    return days;
}
int Time::getHours() const
{
    return hours;
}
int Time::getMinutes() const
{
    return minutes;
}
int Time::getSeconds() const
{
    return seconds;
}