/**
    @file int411.cpp
    @author your name here
    @version what semester and meeting
    @date what date
*/
#include <string>
// Add additional headers as needed here

using namespace std;
string STUDENT = "ilo";  // Add your name Blackboard/occ-email ID

#include "int411.h"

// Implement your library here
int firstDigit(int n)
{
    int result = n < 0 ? -n : n; // no need for abs
    while (result >= 10) result /= 10; // remove right-most digit
    return result;
}

int lastDigit(int n)
{
    int result = n < 0 ? -n : n;
    return result % 10;
}

int numDigits(int n)
{
    int number = n < 0 ? -n : n;
    int result = 1;
    while (number >= 10)
    {
        number /= 10;
        result++;
    }
    return result;
}

