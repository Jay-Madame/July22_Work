#include <iostream>
#include "time.h"

void testTimeAssignment();
void testTimeSimplify();

int main()
{
    testTimeAssignment();
    testTimeSimplify();
    return 0;
}
void testTimeSimplify()
{
    Time myTime(36, 61, 61);
    Time myOtherTime(-1,-1,-1);
    std::cout<< myTime.getDays() << " " 
    << myTime.getHours() << ": "
    << myTime.getMinutes() << ": "
    << myTime.getSeconds() << std::endl;
}

void testTimeAssignment()
{
    Time now(10, 22);
    Time classStart(9, 40);
    std::cout << now.getHours() << ": " << now.getMinutes() << std::endl;

    now = classStart;
    std::cout << now.getHours() << ": " << now.getMinutes() << std::endl;
}