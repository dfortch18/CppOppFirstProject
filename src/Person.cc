#include <string>
#include "Person.h"

using namespace std;

Person::Person(string n, int a, Birthday b)
    : name(n), age(a), dateOfBirth(b)
{
}

string Person::getName()
{
    return this->name;
}

int Person::getAge()
{
    return this->age;
}

Birthday Person::getDateOfBirth() const
{
    return this->dateOfBirth;
}
