#include "hourlyrateemployee.h"

HourlyRateEmployee::HourlyRateEmployee() : Employee()
{
}

HourlyRateEmployee::HourlyRateEmployee(int id, const std::string &name, float salary, int type) :
    Employee(id, name, salary, type)
{
}

HourlyRateEmployee::~HourlyRateEmployee()
{
}

