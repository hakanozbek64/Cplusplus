#include <iostream>
#include <conio.h>
using namespace std;

class kamyon;

class araba{
      
      int yolcular;
      int hiz;
      public:
             
             araba(int y,int h){
                       
                       yolcular=y;
                       hiz=h;
                       
                       }
      friend int ark(araba a,kamyon k);
      
      
      };


class kamyon{

int agirlik;
int hiz;

  public:
       
       kamyon(int ag,int h){
                  
                 agirlik=ag;
                 hiz=h; 
                  
                  }
friend int ark(araba a,kamyon k);

};

int ark(araba a,kamyon k){
    
    return a.hiz-k.hiz;
    
    

}
 main(){
    
  int t;
  
  araba ob1(6,55);
  araba ob2(2,120);
  
  kamyon ob3(1000,55);
  kamyon ob4(2000,72);
  
  cout<<"ob1 ve ob3 karsilastiriliyor.\n";
  t=ark(ob1,ob3);
  if(t<0)
  cout<<"kamyon daha hizli.\n";
  
  else if(t==0)
  
  cout <<"hizlari esit.\n";
  
  else
  cout<<"araba daha hizli.\n";
  
  cout<<"ob2 ve ob4 karsilastiriliyor.\n";
  t=ark(ob2,ob4);
  if(t<0)
  cout<<"kamyon daha hizli.\n";
  
  else if(t==0)
  
  cout <<"hizlari esit.\n";
  
  else
  cout<<"araba daha hizli.\n";
  
  
    

   getch();
   return 0;
}
