#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

 main()
{
    //katarların karşılaştırılması
    
    char sifre[6];
    int sonuc,hak=3;
    
    while(hak-- >0)
   {
     cout<<"sifre: ";
       gets(sifre);  /*şifreyi al */
    
         sonuc=strcmp(sifre,"123456");
    
    if(sonuc==0){
            puts("sifre dogru");
            break;
                                 
      }
    
    else
    puts("sifre yanlış");   
    
    }   
    
    getch();
    return 0;
}





















