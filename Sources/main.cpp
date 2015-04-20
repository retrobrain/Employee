#include "database.h"

int main()
{
    //1
    DataBase dataBase;

    dataBase.createEmployee(44, "Yoda",   15.78,  SALARY::HOURLY);
    dataBase.createEmployee(10,  "Luke",   3864.20, SALARY::FIXED);
    dataBase.createEmployee(62, "Leia",   20.20, SALARY::HOURLY);
    dataBase.createEmployee(15,  "Dart",   2416.00, SALARY::FIXED);
    dataBase.createEmployee(36,  "Chewie", 1664.00, SALARY::FIXED);
    dataBase.createEmployee(66, "Ben",    5.16,  SALARY::HOURLY);
    dataBase.createEmployee(97,  "Obi",    3596.20, SALARY::FIXED);
    dataBase.createEmployee(18, "Jabba",  10.00, SALARY::HOURLY);
    dataBase.createEmployee(9,   "Han",    1742.55, SALARY::FIXED);
    dataBase.createEmployee(93, "Padme",  30.23, SALARY::HOURLY);

    //2
    dataBase.sortDataBase();

    //3
    std::cout << "==============FIRST FIVE EMPLOYEES NAMES=============\n";
    std::list<Employee*> list = dataBase.getList();
    std::list<Employee*>::iterator listIter = list.begin();
    int iRange = 0;
    while(iRange < 5)
    {
        std::cout << (*listIter)->getName() << std::endl;
        iRange++;
        listIter++;
    }

    std::cout << "===============LAST THREE EMPLOYEES ID===============\n";
    std::list<Employee*>::reverse_iterator reverseListIter = list.rbegin();
    iRange = 3;
    while(iRange > 0)
    {
        std::cout << (*reverseListIter)->getId() << std::endl;
        iRange--;
        reverseListIter++;
    }

    //4 - 5
    std::string path = "db.dat";
    dataBase.saveDataBase(path);
    dataBase.loadDataBase(path);

    return 0;
}

