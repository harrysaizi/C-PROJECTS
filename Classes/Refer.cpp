#include <iostream>

using namespace std;

int add(int a,int b);

int add1(int a,int b);

int main()

{
 int a = 20;

 int b = 40;

 cout<<add(a,b)<<endl;

 cout<<add1(a,b);

return 0;

}

int add(int a,int b)

{
    return (a + b);
}

int add1(int &a,int &b)

{
     return (a + b);
}