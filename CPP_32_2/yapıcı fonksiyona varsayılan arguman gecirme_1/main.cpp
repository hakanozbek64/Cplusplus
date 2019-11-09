#include <iostream>
#include <conio.h>
using namespace std;
  
  // varsayýlan fonksiyona argüman gecirme.
  
   class arguman{
          int x;
          public:
                arguman (int n=5){
                            
                            x=n;
                            
                            }
                 int goster(){
                     
                     
                     return x; 
                     
                     }
         };
         
main(){


   arguman ob1;
   arguman ob2(20);
   
   cout<<"ob1:"<<ob1.goster()<<endl<<"ob2:"<<ob2.goster();
    
    getch();
    return 0;

}
