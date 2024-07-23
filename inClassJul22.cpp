#include "time.h"
#include "time.cpp"
#include <iostream>

// functioning :3
void testTimeAssignment();
void testTimeSimplify();
void testTimeAddition();
void testTimeSubtraction();
void testTimePlusPlus();
void testTimeMinusMinus();
void testTimeRelationalOperators();
void testTimeExtractionOperator();

// main
int main()
{
    // testTimeAssignment();
    // testTimeSimplify();
    // testTimeAddition();
    // testTimeSubtraction();
    // testTimePlusPlus();
    // testTimeMinusMinus();
    // testTimeRelationalOperators();
    testTimeExtractionOperator();
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

void testTimePlusPlus()
{
    Time now(11, 24, 59);
    now++;

    std::cout << now.getDays() << " " << now.getHours()
              << ":" << now.getMinutes()
              << " " << now.getSeconds() << std::endl;
}
void testTimeMinusMinus()
{
    Time now(11, 25, 0);
    now--;

    std::cout << now.getDays() << " " << now.getHours()
              << ":" << now.getMinutes()
              << ":" << now.getSeconds() << std::endl;
}

void testTimeRelationalOperators()
{
    Time now(11, 59);
    Time later(1, 1, 1, 1);
    std::cout << (now > later) << std::endl;
    std::cout << (now < later) << std::endl;
}
void testTimeExtractionOperator()
{
    Time now(0, 12, 17, 32);
    std::cout << now;
}