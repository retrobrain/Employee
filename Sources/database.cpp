#include "database.h"

#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>

DataBase::DataBase()
{
}

DataBase::~DataBase()
{
    for(auto iter : m_lEmployees)
        delete iter;
}

void DataBase::loadDataBase(const std::string &path)
{
    std::ifstream fileIn(path.c_str());

    if(m_lEmployees.size() > 0)
        m_lEmployees.clear();

    if (!fileIn.is_open())
        std::cout << "File can not be opened\n";

    int         iType;
    std::string strName;
    int         iId;
    float       fSalary;

    while(!fileIn.eof())
    {
        fileIn >> iType;
        fileIn >> iId;
        fileIn >> strName;
        fileIn >> fSalary;

        createEmployee(iId, strName, fSalary, iType);
    }
}

void DataBase::saveDataBase(const std::string &path)
{
    std::ofstream fOut;
    fOut.open(path.c_str(), std::ios_base::out | std::ios_base::trunc);

    if (!fOut.is_open())
        std::cout << "File can not be opened\n";

    int iElements = m_lEmployees.size();
    std::string endList = "\n";

    for(auto iter : m_lEmployees)
    {
        --iElements;

        fOut << iter->getType() << "  ";
        fOut << iter->getId()   << "  ";
        fOut << iter->getName() << "  ";

        endList = (iElements == 0) ? "\0" : "\n";
        fOut << iter->getSalary() << endList;
    }
    fOut.close();
}

void DataBase::sortDataBase()
{
    m_lEmployees.sort([](Employee *left, Employee *right){ return *right < *left; });
}

void DataBase::createEmployee(int id, const std::string &name, float salary, int type)
{
    Employee *pEmployee;

    if(type == SALARY::FIXED)
        pEmployee = new FixedRateEmployee(id, name, salary, type);
    else
        pEmployee = new HourlyRateEmployee(id, name, salary, type);

    m_lEmployees.push_back(pEmployee);
}

