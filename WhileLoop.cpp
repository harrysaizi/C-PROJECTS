#include <iostream>

using namespace std;

int main()

{

int value;

cout<<"Enter the value between 5 and 10"<<'\n';

cin>>value;

if(value > 4 && value < 11){

    cout<<"Your input value "<<value<<" has been accepted";
}
else if(value = 1 && value < 5){


  while(value < 5){

     cout<<"You entered "<<value<<" Please enter a number between 5 and 10"<<'\n';

     cin>>value;

   }

  if(value = 5 && value < 11)

  cout<<"Your input value "<<value<<" has been accepted";

}

return 0;

}
