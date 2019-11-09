#include <iostream>
#include <conio.h>
using namespace std;

  class deneme{
        float x;
        public:
               //yapýcý fonksiyonlar için aþýrý yükleme yapýcaz.
         
            deneme(int n){
                       
                      x=n; 
                       }
            deneme(int n,float m){
                       
                      x=n+m;
        
                       }
        deneme(int n,float m,long c){
               
               x=(n+m)/c;
               }
        
     int  goster(){
     
      return x;
          }
      };

main(){
    
    deneme ob1(20);
    deneme ob2(20,10.5);
    deneme ob3(25,425,50000);
    
    
    cout<<"1.sayi:"<<ob1.goster() <<endl;
     cout<<"2.sayi:"<<ob2.goster()<<endl;
     cout<<"3.sayi:"<<ob3.goster()<<endl;
    
    
    
    getch();
    return 0;

}
