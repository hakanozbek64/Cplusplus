#include <iostream>
#include <conio.h>
using namespace std;

class deneme{
      int x;
      public:
       int a;
       void ata(int n){
        x=n;
      }
    int goster(){
        cout<<x;
        
        }
};
// public ile eri�im sagland�.
class deneme2: public deneme {
      int y;
      public:
      
       void ata(int n){
        y=n;
      }
    int goster(){
        cout<<y;
        
        }
}ob2;
// private ile eri�im sagland�.
  /*class deneme3 :private deneme{
      int z;
      public:
    
       void ata(int n);
        z=n;
      }
    int goster(){
        cout<<z;
        
        }
}ob3;*/


main(){
       
       ob2.a=26;
       
       
       
       getch();
       return 0;
       
       }
