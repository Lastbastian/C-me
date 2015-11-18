#ifndef Week_14_employee_h
#define Week_14_employee_h
#inlclude <iostream>

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
