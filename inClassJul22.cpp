#include "time.h"
#include "time.cpp"
#include <iostream>

// functioning :3
void testTimeAssignment();
void testTimeSimplify();
void testTimeAddition();
void testTimeSubtraction();

// main
int main()
{
    // testTimeAssignment();
    // testTimeSimplify();
    testTimeAddition();
    testTimeSubtraction();

    return 0;
}

// overloading a constructor
void testTimeAssignment()
{
    Time now = Time(10, 20);
    Time classStart(9, 40);
    std::cout << now.getHours() << ": " << now.getMinutes() << std::endl;

    now = classStart;
    std::cout << now.getHours() << ": " << now.getMinutes() << std::endl;
}

// the beginning of addition and subtraction overload
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

void testTimeAddition()
{
    Time now(11, 05);
    Time dinner(18, 30);
    Time later = now + dinner;

    std::cout << later.getDays() << " " << later.getHours()
              << ":" << later.getMinutes()
              << " " << later.getSeconds() << std::endl;
}

void testTimeSubtraction()
{
    Time now(11, 05);
    Time dinner(18, 30);
    Time later = dinner - now;

    std::cout << later.getDays() << " " << later.getHours()
              << ":" << later.getMinutes()
              << " " << later.getSeconds() << std::endl;
}