#ifndef FIXEDRATEEMPLOYEE_H
#define FIXEDRATEEMPLOYEE_H

#include <employee.h>

class FixedRateEmployee : public Employee
{
public:
    FixedRateEmployee();
    FixedRateEmployee(int id, const std::string &name, float salary, int type);

    ~FixedRateEmployee();

    // Employee interface
    virtual float getSalary() const override {return m_fSalary;}

};

#endif // FIXEDRATEEMPLOYEE_H
