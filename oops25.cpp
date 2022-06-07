#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};

void student ::set_roll_number(int r)
{
    roll_number = r;
}

void student ::get_roll_number()
{
    cout << "the roll number is : " << roll_number << endl;
}
class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void setmarks(float, float);
    void getmarks(void);
};

void exam ::setmarks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void exam ::getmarks()
{
    cout << "the marks obtained in maths are : " << maths << endl;
    cout << "the matks obtained is physics are : " << physics << endl;
}

class result : public exam
{
    float percentage;

public:
    void display_results()
    {
        get_roll_number();
        getmarks();
        cout << "your percentage is : " << (maths + physics) / 2 << endl;
    }
};
int main()
{
    result jenish;
    jenish.set_roll_number(420);
    jenish.setmarks(96.9 , 78.0);
    jenish.display_results();
    return 0;
}