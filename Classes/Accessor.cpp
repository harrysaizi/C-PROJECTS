#include <iostream>

using namespace std;

class all

{

public:

   int age;

   int weight;

   int add(int a, int b);

};

int main()

{

  all child;

  child.age = 12;

  child.weight = 6;

  cout<< " age is :"<<child.age<<endl;

  cout<<" weight is :"<<child.weight<<endl;

  child.add(5,10);

  cout<<" the sum is :" <<child.add(5,10);

  return 0;

}

int all :: add(int a,int b)

{

    int sum = 0;

    int sum = a + b;

    return sum;
}

