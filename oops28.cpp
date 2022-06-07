#include<iostream>
using namespace std;

class base1
{
    public:
        void greet()
        {
            cout<<"how are you ?"<<endl;
        }
};

class base2
{
    public:
    void greet()
    {
        cout<<"kaise ho?"<<endl;
    }
};

class derived : public base1 ,  public base2 
{
    int a;
    public:
        void greet(){
            base1::greet();
            //base2::greet();

        }
};

class abc
{
    int a;
    public:
        void say()
        {
            cout<<"hello world"<<endl;
        }
};

class xyz : public abc
{
    int a ;
    public:
        void say()
        {
            cout<<"hello beautiful people"<<endl;
        }
};

int main ()
{
    base1 base1obj;
    base2 base2obj;
    base1obj.greet();  
    derived d;
    d.greet();

    abc b1;
    b1.say();

    xyz d1;
    d1.say();

    return 0;
}