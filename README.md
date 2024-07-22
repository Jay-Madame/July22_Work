# Topics of today's class:

## Objective
 [ ] By the end of class, you should be able to define your own C++ operator overloads.

## During Class
[ ] __Time Set Up__
    [ ] Make a class called Time
    [ ] Time should have integer values for days, hours, minutes, seconds.
    [ ] Time should have a constructor, and getters for each of these instance variables
    [ ] Default constructor would set all instance variables to 0;
    [ ] Another constructor should take in days, hours, months, and seconds and a third to take in hours, minutes, seconds, and a final one to take in hours and minutes.

[ ] __Time = tester__
 - Time has no complex data types, so the Time class should use the default = operator, without a need to overload it
    [ ] Test this out in the main class by _creating an assignmentTest() function_, that essentially creates two Time objects, assigns one to the other and tests whether the values were copied over.

[ ] __Time +- operator overloading__
    [ ] We should be able to add one time to another.  This should calculate the seconds, minutes, hours, and days of the sum or difference of two different times.
    [ ] Make sure that seconds and minutes do not exceed 59 or go below 0, and that hours does not exceed 23 or go below 0.  Days can be arbitrarily high or negative.
    [ ] Test these functions out with _testTimeAddition()_ and _testTimeSubtraction()_ functions.

[ ] __Time ++ pre and postfix__
    [ ] Implement the ++ and -- pre and postfix operators for time.  Each time, increase or decrease the time by 1 second and simplify it.
    [ ] Test these functions out with _testPrePlus() testPreMinus_, _testPostMinus_, and _testPostPlus()_ functions,

[ ] __Time relational operator__
    [ ] Create relational operator functions for the Time class.
    [ ] Test them with a _testTimeRelationalOperators()_ function.

[ ] __Time << function__
    [ ] Create an ostream << operator overload that takes a Time object.
    [ ] Test it out in a _testTimeOutStreamOperator()_ function.

[ ] __Deck[] overload__
    [ ] Go to the Deck example.
    [ ] Create an overload of the _[]_ function that will refer to the card at the appropriate location.


[ ] __Time to int conversion__
    [ ] Create a function that will convert a Time object into an int.  Make the integer equal to the number of seconds represented by the time.
    [ ] Test this conversion out in a _testTimeIntegerConversion()_ function.

## Exit Ticket

[ ] Turn in your Time class and tester functions - Due on July 23 at 9:40 A.M