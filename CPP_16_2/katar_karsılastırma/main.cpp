#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

 main()
{
    //katarlar�n kar��la�t�r�lmas�
    
    char sifre[6];
    int sonuc,hak=3;
    
    while(hak-- >0)
   {
     cout<<"sifre: ";
       gets(sifre);  /*�ifreyi al */
    
         sonuc=strcmp(sifre,"123456");
    
    if(sonuc==0){
            puts("sifre dogru");
            break;
                                 
      }
    
    else
    puts("sifre yanl��");   
    
    }   
    
    getch();
    return 0;
}





















