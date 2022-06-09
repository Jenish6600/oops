#include <iostream>
#include <cmath>
using namespace std;

class simplecalculator
{
    int a, b;

public:
    void getdatasimple()
    {
        cout << "enter the value of a :" << endl;
        cin >> a;
        cout << "enter the value of b :" << endl;
        cin >> b;
    }

    void performoperationssimple()
    {
        cout << "the value of a + b is : " << a + b << endl;
        cout << "the value of a - b is : " << a - b << endl;
        cout << "the value of a * b is : " << a * b << endl;
        cout << "the value of a / b is : " << a / b << endl;
    }
};

class scientificcalculator
{
    int a, b;

public:
    void getdatascientific()
    {
        cout << "enter the value of a : " << endl;
        cin >> a;
        cout << "enter the value of b : " << endl;
        cin >> b;
    }
    void performoperationsscientific()
    {

        cout << "the value of cos(a) is : " << cos(a) << endl;
        cout << "the value of sin(a) is : " << sin(a) << endl;
        cout << "the value of tan(a) is : " << tan(a) << endl;
        cout << "the value of exp(a) is : " << exp(a) << endl;
    }
};

class hybridcalculator : public simplecalculator, public scientificcalculator
{
};

int main()
{
    simplecalculator calc;
    calc.getdatasimple();
    calc.performoperationssimple();
    scientificcalculator calc1;
    calc1.getdatascientific();
    calc1.performoperationsscientific();
    hybridcalculator calc2;
    ;
    calc2.getdatasimple();
    calc2.performoperationssimple();
    calc2.getdatascientific();
    calc2.performoperationsscientific();
    return 0;
}

// calculator
// simplecalculator
// scientificcalculator