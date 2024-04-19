#include <iostream>

#include <cstdlib>

#include <ctime>

using namespace std;

int main()

{

   srand((unsigned) time(NULL));

   int randomOrigin = rand() % 12;

   switch(randomOrigin){

    case 0: 
          cout<<"Your subscription has expired.";
          break;

    case 1:
          cout<<"Your subscription expires within a day!"<<'\n'<<"Renew now and save 20%!"; 
          break;
    case 2:
    case 3:
    case 4:
    case 5:
         cout<<"Your subscription expires in "<<randomOrigin<<" Days"<<'\n'<<"Renew now and save 10%!";
         break;

    case 6: 
    case 7:
    case 8:
    case 9:
    case 10:
          cout<<"Your subscription will expire soon. Renew now!";
          break;
    default:
          cout << "You have an Active";       

} 

return 0; 

}