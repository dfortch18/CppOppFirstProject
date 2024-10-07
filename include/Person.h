#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "Birthday.h"

using namespace std;

class Person
{
public:
    Person(string n, int a, Birthday b);
    string getName();
    int getAge();
    Birthday getDateOfBirth() const;
private:
    string name;
    int age;
    const Birthday dateOfBirth;
};

#endif
