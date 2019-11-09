#include <iostream>
#include <conio.h>
using namespace std;

class dinamik{

int x,y;

public:
       
        void ata(int sayi1,int sayi2){
          x=sayi1;
          y=sayi2;
          }
          int carp(){
              return x*y;
          
              }

};
 main(){

dinamik *p;
 p=new dinamik;
 
 p->ata(5,6);

cout<<"carpimlari:"<<p->carp();

   getch();
   return 0;
}
