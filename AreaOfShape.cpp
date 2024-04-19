#include <iostream>

using namespace std;

int Square(int length);

int Rectangle(int length,int width);

int Triangle(int base,int hieght);

int main()

{
   int length, width,base ,hieght;
   
   int selection;

   cout<<"Select Shape"<<'\n'<<"1.Square"<<'\n'<<"2.Rectangle"<<'\n'<<"3.Triangle"<<'\n';
  
   cin>>selection;

   if(selection == 1)

   {

     Square(length);

     cout<<"Enter length"<<'\n';

     cin>>length;


     cout<<"The area of square of length "<<length<<" is "<<Square(length);

   }

   if(selection == 2)

   {
      cout<<"Enter length"<<'\n';

      cin>>length;

      cout<<"Enter width"<<'\n';

      cin>>width;

      Rectangle(length,width);

      cout<<"The area of rectangle of length "<<length<<" and width "<<width<<" is "<<Rectangle(length,width);

   }

if(selection == 3)

{

      cout<<"Enter Base"<<'\n';

      cin>>base;

      cout<<"Enter hieght"<<'\n';

      cin>>hieght;

      Triangle(base,hieght);

      cout<<"The area of triangle of base "<<base<<" and hieght "<<hieght<<" is "<<Triangle(base,hieght);

}

return 0;

}


int Square(int length)

{

int area = length * length;

return length;

}

int Rectangle(int length,int width)

{

int area;

area = length * width;

return area;

}

int Triangle(int base,int hieght)

{

int area;

area = 0.5 * base * hieght;

return area;

}

