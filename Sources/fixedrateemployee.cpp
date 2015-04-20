#include "fixedrateemployee.h"

FixedRateEmployee::FixedRateEmployee() : Employee()
{
}

FixedRateEmployee::FixedRateEmployee(int id, const std::string &name, float salary, int type) :
    Employee(id, name, salary, type)
{
}

FixedRateEmployee::~FixedRateEmployee()
{
}

