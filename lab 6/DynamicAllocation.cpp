#include <iostream>

using namespace std;

int main()

{

    int * InValue = new int;

    string * StValue = new string;

    cout<<"Enter the value of the integer"<<endl;

    cin>>*InValue;

    cout<<"Enter the value of the string"<<endl;

    cin>>*StValue;

    cout<<"The value of an integer is :"<<*InValue<<endl;

    cout<<"The value of the string is :"<<*StValue;

    return 0;


}