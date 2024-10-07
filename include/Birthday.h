#ifndef BIRTHDAY_H
#define BIRTHDAY_H

class Birthday
{
public:
    Birthday(int d, int m, int y);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    void printDate() const;
private:
    const int day;
    const int month;
    const int year;
};

#endif
