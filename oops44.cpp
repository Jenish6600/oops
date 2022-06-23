#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // connecting our file with hout stream
    ofstream hout("sample44.txt");
    // creating a name string and filing it with the string entered by the user
    string name;
    cout << "enter your name ";
    cin >> name;
    // writing a string to the file
    hout << "my name is " << name;

    hout.close();

    ifstream hin("sample44.txt");
    string content;
    hin >> content;
    getline(hin, content);
    cout << "the content of this file is : " << content;

    return 0;
}