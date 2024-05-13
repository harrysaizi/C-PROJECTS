#include <iostream>

using namespace std;

class values

{

  private:

  unsigned int age;

  public:

  string name;

  string occupation;

  void setage(int Newage);

  int getage();

};

int main()

{
  
values person;

person.name = "harry";

person.occupation = "graphic designer";

person.setage(23);

cout<<"values are :"<<person.name<<endl;

cout<<"values are :"<<person.getage()<<endl;

cout<<"values are :"<<person.occupation<<endl;

return 0;

}

void values :: setage(int Newage)

{

    if(Newage = 0)

      age  = Newage;

}

int values :: getage()

{

   return age;

}
