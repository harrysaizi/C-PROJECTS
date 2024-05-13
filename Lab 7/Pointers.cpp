#include <iostream>

using namespace std;


void SwapNumbers(int *pvarA,int *pvarB);

int main()

{

int varA = 25;

int varB = 100;

int *pvarA = nullptr;

pvarA = &varA;

int *pvarB = nullptr;

pvarB = &varB;

cout<<" varA before swap "<<varA<<endl;

cout<<" varB before swap "<<varB<<endl;

SwapNumbers(pvarA,pvarB);

cout<<" varA after swap "<<*pvarA<<endl;

cout<<" varB after swap "<<*pvarB<<endl;

return 0;

}

void SwapNumbers(int *pvarA,int *pvarB)
{

int temp;

int *ptemp = nullptr;

ptemp = &temp;

ptemp = pvarA;

pvarA = pvarB;

pvarB = ptemp;

}