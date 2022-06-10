#include <iostream>
using namespace std;

class shopitem
{

public:
    int id;
    float price;
    void setdata(int a, float b)
    {
        id = a;
        price = b;
        cout << "your product id is : " << id << endl;
    }
    void getdata()
    {
        cout << "your product id is : " << id << endl;
        cout << "your product price is : " << price << endl;
    }
};

int main()
{
    int size = 3;
    // int *ptr = new int [34];
    // int *ptr = &size;
    //  1 general store
    //  2 veggies
    //  3 hardware

    shopitem *ptr = new shopitem[size];

    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Id and Price of item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setdata(p, q);
        ptr++;
    }
    ptr = ptr - 3;
    for (int i = 0; i < size; i++)
    {
        cout << "Item number: " << i + 1 << endl;
        ptr->getdata();
        ptr++;
    }

    return 0;
}

// Array of Objects Using Pointers