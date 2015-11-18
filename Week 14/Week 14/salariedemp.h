// this is the file "salariedemp.h"

#ifndef SALARIEDEMP_H
#define SALARIEDEMP_H
#include "employee.h"
#include <string>
using namespace std;

class salariedEmp : public employee {
public:
    salariedEmp();
    salariedEmp(const string& newName,
                const string& newSsn,
                double newWeeklySalary);
    void printCheck() const;
    void giveRaise(double amount);
protected:
    double salary;
};



#endif