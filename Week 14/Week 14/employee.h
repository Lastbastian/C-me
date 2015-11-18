#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std;


class employee
{
    public:
        employee();
        employee(const string& newName, const string& newSsn);
        string getName() const;
        string getSsn() const;
        void changeName(const string& newName);
        void changeSsn(const string& newSsn);
    
    private:
        string name;
        string ssn;
        double netPay;
};

#endif
