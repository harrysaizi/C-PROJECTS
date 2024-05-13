#include <iostream>

using namespace std;

class learn

{

  private : 

  int var;

  public :

  void Setvar(int Var);

  int Getvar();

};

int main()

{

  learn output;

  output.Setvar(2);

  cout<<output.Getvar();

  return 0;

}

void learn :: Setvar(int Var)

{
    var = Var;
}

int learn :: Getvar()
{

  return var;

}