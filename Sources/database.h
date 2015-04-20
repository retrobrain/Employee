#ifndef DATABASE_H
#define DATABASE_H

#include "fixedrateemployee.h"
#include "hourlyrateemployee.h"

class DataBase
{
public:
    DataBase();
    ~DataBase();

    void saveDataBase(const std::string &path);
    void loadDataBase(const std::string &path);

    void sortDataBase();
    void createEmployee(int id, const std::string &name, float salary, int type);

    const std::list<Employee*>& getList() const { return m_lEmployees; }
private:

    std::list<Employee*> m_lEmployees;
};

#endif // DATABASE_H
