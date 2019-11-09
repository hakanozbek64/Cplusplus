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
  
arit operator+(arit);
             
             };       
   arit::arit(int a,int b){
                     
      x=a;
      y=b;
      
      }
arit arit ::operator+(arit koord){

  arit gecici;
  
  gecici.x=x+koord.x;
  
  gecici.y=y+koord.y;
  
  return gecici;

};

int main(int argc, char *argv[])
{
    arit a(19,23);
    arit b(5,4);
    arit c;
    
    c=a+b;
    
    // 2 nesneyi topladýk.
    
    //+ iþleci operator+' yý cagýrdý.
    
    cout<<"1.sayi:"<<c.x<<endl;
    
    cout<<"2.sayi:"<<c.y;
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
