#include <iostream>
#include <conio.h>
using namespace std;

class toplama{  

int x,y;
  public:
       
  toplama(int sayi1,int sayi2){
      this->  x=sayi1;
      this->  y=sayi2;
       
}
int topla(){
    return this->x+this->y;
    
    }
int goster(){
    
    int m;
    m=this->topla();
    cout<<m;
    
           }
    
    };


main(){
   
// 100 ve 200 say�s�n� nesne degi�ekenlerine atayal�m.bunlar�n toplama�n�da this i kullanarak g�sterelim.
  
   toplama ob(100,200);
    ob.goster();    
        
        
     
        getch();
        return 0;
        
}
