#include <iostream>

using namespace std;

class trick

{

public:    

string name;

string address;

int number;

/*trick( string Name,string Address, int Number)

{

   name = Name;

   address = Address;

   number = Number;

} 
*/
void output()

{

    cout<<" Name :"<<name;
        cout<<" Address :"<<address;
            cout<<" Number :"<<number;
            
}

};

int main()

{

   trick student1;

   student1.name= "harry";
   student1.address="chikanda";
   student1.number=12;
   student1.output();



 /*  trick OneName = trick("Harry", "Chikanda",12345);

   OneName.trick :: output();

   return 0;
*/
}
