#include <iostream>
#include <conio.h>
using namespace std;

class deneme{
      int a;
      public:
             friend int fonk (deneme n);
             
             deneme(){
                      
                a=10;      
                      }
      
      }test;
    int fonk(deneme n){  
return test.a;

}
 main(){
    
    cout<<fonk(test);
    
   getch();
   return 0;
}
