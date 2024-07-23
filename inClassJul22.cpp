#include "time.h"
#include "time.cpp"
#include <iostream>

void testTimeAssignment();

int main()
{
    testTimeAssignment();
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
