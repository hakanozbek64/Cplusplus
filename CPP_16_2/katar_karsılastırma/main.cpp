#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

 main()
{
    //katarlarýn karþýlaþtýrýlmasý
    
    char sifre[6];
    int sonuc,hak=3;
    
    while(hak-- >0)
   {
     cout<<"sifre: ";
       gets(sifre);  /*þifreyi al */
    
         sonuc=strcmp(sifre,"123456");
    
    if(sonuc==0){
            puts("sifre dogru");
            break;
                                 
      }
    
    else
    puts("sifre yanlýþ");   
    
    }   
    
    getch();
    return 0;
}





















