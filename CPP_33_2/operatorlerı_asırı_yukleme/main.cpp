#include <cstdlib>
#include <iostream>

using namespace std;
class arit{
      public:
             
             int x,y;
             arit(){
             x=0;
             y=0;
             }
  arit(int,int );
  arit operator=(arit);
  arit operator+(arit); 
  arit operator-(arit);
  arit operator+(int sayi);           
             };   
  arit arit ::operator+(int sayi){
       
     arit gecici;
  
  gecici.x=x+sayi;
  
  gecici.y=y+sayi;
  
  return gecici;  
       
       }                     
   arit::arit(int a,int b){
                     
      x=a;
      y=b;
      
      }
arit arit ::operator-(arit koord){

  arit gecici;
  
  gecici.x=x-koord.x;
  
  gecici.y=y-koord.y;
  
  return gecici;
}
arit arit ::operator+(arit koord){

  arit gecici;
  
  gecici.x=x+koord.x;
  
  gecici.y=y+koord.y;
  
  return gecici;
  }
  
  arit arit ::operator=(arit koord){
  x=koord.x;
  y=koord.y;
  return *this;//atadýgýmýz nesne döndürülüyor.
  

}

int main(int argc, char *argv[])
{
    arit a(19,23);
    arit b(5,4);
    arit c;
    
   
    
    // 2 nesneyi topladýk.
    
    //+ iþleci operator+' yý cagýrdý.
     c=a+b;
    cout<<"1.sayi:"<<c.x<<endl;
    
    cout<<"2.sayi:"<<c.y<<endl;
    
    
     c=a-b;
    cout<<"1.sayi:"<<c.x<<endl;
    
    cout<<"2.sayi:"<<c.y<<endl;
    
     c=a+b;
    cout<<"1.sayi:"<<c.x<<endl;
    
    cout<<"2.sayi:"<<c.y<<endl;
    
    
     c=a;
    cout<<"1.sayi:"<<c.x<<endl;
    
    cout<<"2.sayi:"<<c.y<<endl;
    
     c=b;
    cout<<"1.sayi:"<<c.x<<endl;
    
    cout<<"2.sayi:"<<c.y<<endl;
    
    c=a+10;
    cout<<"1.sayi:"<<c.x<<endl;
    
    cout<<"2.sayi:"<<c.y<<endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
