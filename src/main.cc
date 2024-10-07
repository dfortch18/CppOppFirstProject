#include <iostream>
#include "Birthday.h"
#include "Person.h"

using namespace std;

int main()
{
    string name;
    int age;
    int bDay;
    int bMonth;
    int bYear;


    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter date of birth (day): ";
    cin >> bDay;

    cout << "Enter date of birth (month): ";
    cin >> bMonth;

    cout << "Enter date of birth (year): ";
    cin >> bYear;

    const Birthday birthday(bDay, bMonth, bYear);

    Person person(name, age, birthday);
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Birthday: ";
    person.getDateOfBirth().printDate();

    return 0;
}
