#include <iostream>
using namespace std;

int main()
{
    int marks[] = {40, 56, 80, 90};
    int mathmarks[5];
    mathmarks[0] = 89;
    mathmarks[1] = 56;
    mathmarks[2] = 78;
    mathmarks[3] = 90;
    cout << ":::these are math marks:::" << endl;
    // cout << mathmarks[0] << endl;
    // cout << mathmarks[1] << endl;
    // cout << mathmarks[2] << endl;
    // cout << mathmarks[3] << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "the value of mathmarks " << i << " is " << mathmarks[i] << endl;
    }
    cout << "::these are marks:::" << endl;
    marks[2] = 67;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[0] << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "the value of marks " << i << " is " << marks[i] << endl;
    }

    return 0;
}



//array and pointer
