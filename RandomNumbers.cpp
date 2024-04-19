#include <iostream>

#include <cstdlib>

#include <ctime>

using namespace std;

int main()

{

   srand((unsigned) time(NULL));

   int randomOrigin = 1 + (rand() % 10);

   if( randomOrigin = 1 && randomOrigin < 6){

    int RandomBasic = 1 + (rand() % 10);

    if(RandomBasic = 1 && RandomBasic < 6 ){

        cout<<"You have an active subscription";
    }

    else{

        cout<<"Your subscription has expired.";

    }

   }
       
else{

     int random = 1 + (rand() % 10);

      if( random > 5 && random < 11){

        cout<<" Your subscription will expire soon.Renew now!";
       
      }

      else if( random < 6 && random > 1 ){

      cout<<" Your subscription expires in " <<random<<" days" <<'\n'<< "Renew now and save 10%!";
      }

      else if( random = 1){

      cout<<"Your subscription expires within a day!"<<'\n'<<"Renew now and save 20%!";
    }    
  
}

return 0;

}  