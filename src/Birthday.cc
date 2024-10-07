#include <iostream>
#include "Birthday.h"

using namespace std;

Birthday::Birthday(int d, int m, int y)
    : day(d), month(m), year(y)
{
}

int Birthday::getDay() const
{
    return this->day;
}

int Birthday::getMonth() const
{
    return this->month;
}

int Birthday::getYear() const
{
    return this->year;
}

void Birthday::printDate() const
{
    cout << day << "/" << month << "/" << year << endl;
}
