#ifndef HOURLYRATEEMPLOYEE_H
#define HOURLYRATEEMPLOYEE_H

#include "employee.h"

class HourlyRateEmployee : public Employee
{
public:
    HourlyRateEmployee();
    HourlyRateEmployee(int id, const std::string &name, float salary, int type);

    ~HourlyRateEmployee();

    // Employee interface
    virtual float getSalary() const override {return m_fSalary * WORK_HOURS * TAX;}
};

#endif // HOURLYRATEEMPLOYEE_H
