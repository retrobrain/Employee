#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "globalappconsts.h"

namespace SALARY
{
const int HOURLY = 2233;
const int FIXED  = 3344;
}

class Employee
{
public:
    Employee();
    Employee(int id, const std::string &name, float salary, int T);

    // copy and assignment prohibited
    Employee(const Employee&) = delete;
    void operator=(const Employee&) = delete;

    virtual ~Employee();

    virtual void setId(int id) { m_iId = id; }
    virtual int getId() const { return m_iId; }

    virtual void setName(const std::string &name) { m_strName = name; }
    virtual std::string getName() const { return m_strName; }

    virtual void setType(int type) { m_salaryType = type; }
    virtual int getType() const { return m_salaryType; }

    void setSalary(float salary) { m_fSalary = salary; }
    virtual float getSalary() const = 0;

    bool operator<(const Employee& object);
protected:

    float       m_fSalary;
    int         m_salaryType;

private:

    int         m_iId;
    std::string m_strName;
};

#endif // EMPLOYEE_H
