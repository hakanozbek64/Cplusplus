#include <iostream>
#include <conio.h>

using namespace std;


union kisi{
       
       char ad[25];
       char soyad[20];
       int yas;
       
        
       }deneme;

main(){
  
  
    strcpy(deneme.ad,"Ali");
    strcpy(deneme.soyad,"Sonmez");
    deneme.yas=21;
    
   
    cout<<"adi :"<<deneme.ad<<endl;
    cout<<"soyadi :"<<deneme.soyad<<endl;
    cout<<"yasi :"<<deneme.yas;
    
    getch();
    system("PAUSE");
}
