#include <iostream>

using namespace std;

int main()

{

void SwapNumbers(int &varA,int &varB);

int varA = 25;

int varB = 100;

cout<<" varA before swap "<<varA<<endl;

cout<<" varB before swap "<<varB<<endl;

SwapNumbers(varA,varB);

cout<<" varA after swap "<<varA<<endl;

cout<<" varB after swap "<<varB<<endl;

return 0;

}

void SwapNumbers(int& varA,int& varB)

{

int temp;

temp = varA;

varA = varB;

varB = temp;

}