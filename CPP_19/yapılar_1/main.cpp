#include <iostream>
#include <conio.h>

using namespace std;


struct kisi{
       
       char ad[25];
       char soyad[20];
       int yas;
       
        
       }deneme,deneme2,deneme3;

main(){
    deneme2.yas=34;  
    strcpy(deneme.ad,"Ali");
    strcpy(deneme.soyad,"Sonmez");
    deneme.yas=21;
    
    cout<<"deneme 2 nin yasi:"<<deneme2.yas<<endl;
    cout<<"adi :"<<deneme.ad<<endl;
    cout<<"soyadi :"<<deneme.soyad<<endl;
    cout<<"yasi :"<<deneme.yas;
    
    getch();
    system("PAUSE");
}
