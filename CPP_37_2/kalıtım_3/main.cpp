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
// public ile eriþim saglandý.
class deneme2: public deneme {
      int y;
      public:
      
       void ata2(int n){
        y=n;
      }
    int goster2(){
        cout<<x+y;
        
        }
}ob2;
// private ile eriþim saglandý.
  /*class deneme3 :private deneme{
      int z;
      public:
    
       void ata3(int n);
        z=n;
      }
    int goster3(){
        cout<<z;
        
        }
}ob3;*/


main(){
       
       ob2.ata(3);
       ob2.goster();
       
       
       getch();
       return 0;
       
       }
