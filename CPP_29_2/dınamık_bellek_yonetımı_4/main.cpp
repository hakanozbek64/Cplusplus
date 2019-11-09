#include <iostream>
#include <conio.h>
using namespace std;
class telefon{

 char isim[20];
 char numara[20];
 public: void ata (char *is,char *num){
         
         strcpy(isim,is);
         strcpy(numara,num);
         
         }
int goster(){
    cout<<isim<<":"<<numara;
    
    
    }


}ob;
 main(){
// kiþi ismini ve tel numarasýný .sýnýfla yap.bellekten nesne için yer ayýr.
//sonra isim ve noyu kendin gir.
  
  telefon*p;
  p=new telefon;
  
ob.ata("hakan","05545799846");
ob.goster();


   getch();
   return 0;
}
