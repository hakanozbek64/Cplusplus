#include <iostream>
#include<conio.h>
using namespace std;

// tarih bilgisini veren program.

void tarih(int gun,int ay,int yil){
     
 cout<<"tarih:"<<gun<<"/" <<ay<<"/"<<yil<<endl;
     
     }
  void tarih(char *tarih){
       
       cout <<"tarih:"<<tarih<<endl;
       }


main(){
       
       
       tarih("22/07/2012");
       tarih(22,07,2012);
     
    getch();
    return 0;
}

