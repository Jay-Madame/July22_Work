#include "time.h"
#include "time.cpp"
#include <iostream>

void testTimeAssignment();
void testTimeSimplify();
int main()
{
    testTimeAssignment();
    testTimeSimplify();
    return 0;
}

void testTimeAssignment()
{
    Time now = Time(10, 20);
    Time classStart(9, 40);
    std::cout << now.getHours() << ": " << now.getMinutes() << std::endl;

    now = classStart;
    std::cout << now.getHours() << ": " << now.getMinutes() << std::endl;
}

void testTimeSimplify()
{
    Time myTime(36, 61, 61);
    Time myOtherTime(-1, -1, -1);

    std::cout << myTime.getDays() << " " << myTime.getHours()
              << ":" << myTime.getMinutes() << " " << myTime.getSeconds()
              << std::endl;

    std::cout << myOtherTime.getDays() << " " << myOtherTime.getHours()
              << ":" << myOtherTime.getMinutes() << " " << myOtherTime.getSeconds()
              << std::endl;
    myOtherTime.simplify();
    std::cout << myOtherTime.getDays() << " " << myOtherTime.getHours()
              << ":" << myOtherTime.getMinutes() << " " << myOtherTime.getSeconds()
              << std::endl;
}