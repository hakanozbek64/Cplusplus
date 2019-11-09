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
   
// 100 ve 200 sayýsýný nesne degiþekenlerine atayalým.bunlarýn toplamaýnýda this i kullanarak gösterelim.
  
   toplama ob(100,200);
    ob.goster();    
        
        
     
        getch();
        return 0;
        
}
