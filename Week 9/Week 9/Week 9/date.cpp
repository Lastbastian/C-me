// this is the file date.cpp
// it is added to the project


#include <iostream>
#include "date.h"
using namespace std;


date::date()
{
    month = 1;
    day = 1;
    year = 1600;
}


date::date(int inMonth, int inDay, int inYear)
{
    month = inMonth;
    day = inDay;
    year = inYear;
}


void date::read()
{
    char dummy;
    
    cin >> month;
    cin >> dummy;
    cin >> day;
    cin >> dummy;
    cin >> year;
}


void date::print() const
{
    cout << month << "/" << day << "/" << year;
}


void date::set(int inMonth, int inDay, int inYear)
{
    day = inDay;
    month = inMonth;
    year = inYear;
}


bool date::comesBefore(const date &otherDate) const
{
    if (year < otherDate.year){
        return true;
    }
    
    if (year > otherDate.year){
        return false;
    }
    
    if (month < otherDate.month){
        return true;
    }
    
    if (month > otherDate.month){
        return false;
    }
    
    return day < otherDate.day;
}


void date::increment()
{
    day++;
    
    if (day > daysInMonth()){
        day = 1;
        month++;
    }
    
    if (month > 12){
        month = 1;
        year++;
    }
}


int date::numDaysInMonth()
{
    switch (month) {
        case 2:if (isLeapYear()){
            return 29;
        } else {
            return 28;
        }
            
        case 4:
        case 6:
        case 9:
        case 11: return 30;
            
        default: return 31;
    }
}

bool date::isLeapYear()
{
    if (year % 400 == 0){
        return true;
    }
    
    if (year % 100 == 0){
        return false;
    }
    
    return year % 4 == 0;
}



date date::increaseBy(int numDays) const
{
    date tempDate;
    
    tempDate.set(month, day, year);
    for (int count = 0; count < numDays; count++){
        tempDate.increment();
    }
    
    return tempDate;
}