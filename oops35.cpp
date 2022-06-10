#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *ptr = &a;
    *ptr = 999;
    cout << "the value of a is " << *(ptr) << endl;

    float *p = new float(40.76);
    cout << "the value at address is " << *(p) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;
    // delete [] arr;
    cout << "the value of arr[0] is " << arr[0] << endl;
    cout << "the value of arr[1] is " << arr[1] << endl;
    cout << "the value of arr[3] is " << arr[2] << endl;

    return 0;
}



//new and delete keywords
