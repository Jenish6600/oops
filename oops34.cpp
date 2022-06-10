#include <iostream>
using namespace std;

int main()

{
    int a = 4;
    int *ptr = &a;
    cout << "the value of a is " << *(ptr) << endl;

    return 0;
}