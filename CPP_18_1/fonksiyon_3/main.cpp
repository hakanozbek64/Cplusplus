#include <iostream>
#include <conio.h>

using namespace std;

     
int usalma(int sayi1,int sayi2);

main(){
       
      int taban,us;
      cout<<"taban sayisini giriniz";
      cin>>taban;
      cout<<"üsssü  giriniz:";
      
      cin>>us;
      
      cout<<usalma(taban,us);
 
       
       getch();
       return 0;
       
       }
       
       int usalma(int x,int y){
       
       int z,toplam=1;
       
       for(z=1;z<=y;z++)
              toplam=toplam*x;
       
              return toplam;
       }
