#include "employee.h"

Employee::Employee() :
    m_iId(0),
    m_strName("\0"),
    m_fSalary(0.0f),
    m_salaryType(0)
{
}

Employee::Employee(int id, const std::string &name, float salary, int T) :
    m_iId(id),
    m_strName(name),
    m_fSalary(salary),
    m_salaryType(T)
{
}

Employee::~Employee()
{
}

bool Employee::operator<(const Employee &object)
{
    int iThisSalary = m_fSalary * 100;
    int iObjectSalary = object.getSalary() * 100;

    if(iThisSalary < iObjectSalary)
        return true;
    else if(iThisSalary == iObjectSalary)
        if(m_strName < object.getName())
            return true;

    return false;
}


