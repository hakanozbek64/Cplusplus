#include <iostream>
#include <conio.h>
using namespace std;

  class deneme{
       int  x;
        public:
              
         
            deneme(){
                       
                      x=0; // hazırlayıcı yok
                       }
            deneme(int n){
                       
                      x=n;// hazırlayıcı var.
        
                       }
        
     int  goster(){
     
      return x;
          }
      };

main(){
    
    deneme ob1(20);
    deneme ob2;
    
    
    
    cout<<"1.sayi:"<<ob1.goster() <<endl;
     cout<<"2.sayi:"<<ob2.goster()<<endl;
     
    
    
    
    getch();
    return 0;

}
