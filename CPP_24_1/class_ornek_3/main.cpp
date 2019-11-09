#include <iostream>
#include <conio.h>
using namespace std;

class hacimhesapla{
      int x,y,z,hacim;
      
      public:
  hacimhesapla(int a,int b,int c){
                 
                 x=a;
                 y=b;
                 z=c;
                 hacim=x*y*z;
                 }
                 void goster(){
                      
                      cout<<"hacim:"<<hacim<<endl;
                      }
                 
      };

 main(){
       
     hacimhesapla test1(7,7,7); 
     hacimhesapla test2(99,99,99) ;
      hacimhesapla test3(33,66,99) ;
       
      test1.goster(); 
      test2.goster();
      test3.goster();  
      
      
  getch();
  return 0;
}
