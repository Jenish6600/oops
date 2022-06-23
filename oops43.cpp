#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string st = " jenish bhai ";
    string st2;

    // opening files using constructor and writing it 
    // ofstream out("sample43.txt");//write operation 
    // out<<st;
    
    // opening files using constructor and reading it 
    fstream in("sample43b.txt");//read operation 
    // in>>st2;
    getline(in,st2);
    cout<<st2;

    return 0 ; 
}