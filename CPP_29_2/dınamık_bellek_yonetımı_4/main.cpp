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
// ki�i ismini ve tel numaras�n� .s�n�fla yap.bellekten nesne i�in yer ay�r.
//sonra isim ve noyu kendin gir.
  
  telefon*p;
  p=new telefon;
  
ob.ata("hakan","05545799846");
ob.goster();


   getch();
   return 0;
}
