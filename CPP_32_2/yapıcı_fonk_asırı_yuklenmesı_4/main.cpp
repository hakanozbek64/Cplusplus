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
    
    deneme ob1[10]; // ilk deger olmadan bildirdik.
    deneme ob2[3]={3,5,7};// ilk degerle bildirdik.
    
    
     int i;
     
     for(i=0;i<3;i++){
                      
        cout<<"ob1["<<i<<"]:"<<ob1[i].goster()<<endl;
        cout<<"ob2["<<i<<"]:"<<ob2[i].goster()<<endl;
                     
                      
                      }
    
    getch();
    return 0;

}
