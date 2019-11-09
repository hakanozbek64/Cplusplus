#include <cstdlib>
#include <iostream>

using namespace std;

// <,> iþleclerini aþýrý yükle.
//a(x1,x2) ve b(x2,y2)
 class test {
       int x,y;
       public:
          test(){
                     
                x=0;
                y=0;
                     
                     }
          test(int a,int b){
                  x=a;
                  y=b; 
            
                 }
  int operator==(test ob);
  int operator&&(test ob);               
                                 
 };
 //a(x,y) ve b(ob.x,ob.y)
 int test :: operator==(test ob){
     
     return x =ob.x&& y==ob.y;
     
     }
     
   int test ::operator&&(test ob){
       
      return (x&&ob.x)&&(y&&ob.y);  
      
       }  
int main(int argc, char *argv[])
{
    test a(5,5);
    test b(3,6);
    test c(5,5);
    
    if(a==b)
    cout<<"a ile b  ayni."<<endl;
    else
    cout<<"a ile b farklý."<<endl;
    
    if (a==c)
    cout<<"a ile c ayni."<<endl;
    else
    cout<<"a ile c farkli."<<endl;
    
    
    if (a&&b)
    cout<<"a ve b true."<<endl;
    else
    cout<<"a ve b false."<<endl;
    
    if (a&&c)
    cout<<"a ve c true."<<endl;
    else
    cout<<"a ve c false."<<endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
