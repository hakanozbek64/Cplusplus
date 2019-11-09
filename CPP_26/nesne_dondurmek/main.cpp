#include <iostream>
#include <conio.h>

using namespace std;

class test{
   int i;
   public:
          void ata(int n){
               i=n;
               }
         int goster(){

              return i;
              }
}nesne1,nesne2;

test kitap(){
     
     nesne1.ata(157);
     return nesne1;
     
     }

 main(){
  nesne2=kitap();
    
    cout<<nesne2.goster();
    
   getch();
   return 0;
}
