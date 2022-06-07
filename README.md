# oops
#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    float salary;
    employee() {}
    employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
};

class programmer : employee
{
public:
    programmer(int inpid)
    {
        id = inpid;
    }
    int languagecode = 9;
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    employee jenish(1), heni(2);
    cout << jenish.salary << endl;
    cout << heni.salary << endl;
    programmer skillf(1);
    cout << skillf.languagecode << endl;
    skillf.getdata();
    return 0;
}
