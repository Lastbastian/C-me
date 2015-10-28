// this is the file date.h
// it is not added to the project.
// it must be located in the same folder
// as the project.

#ifndef DATE_H
#define DATE_H

class date {
public:
    date();
    date(int inMonth, int inDay, int inYear);
    void set(int inDay, int inMonth, int inYear);
    void print()const;
    void read();
    bool comesBefore(const date &otherDate) const;
    void increment();
    date increaseBy(int numDays) const;
private:
    int daysInMonth() const;
    bool isLeapYear() const;
    int day;
    int month;
    int year;
};

#endif