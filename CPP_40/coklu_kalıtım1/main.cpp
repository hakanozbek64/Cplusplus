#include <cstdlib>
#include <iostream>

using namespace std;

class a{
     int x;
     
     public : 
            int f1(){
                return x =10;
                
                }  
      };

class b{
      int y;
     
     public : 
            int f2(){
                return y =20;
                
                } 
      
      };

class c : public a,public b{
      
      int z;
     
     public : 
            int f3(){
                return z =17;
                }
                }ob ;
      
     

int main(int argc, char *argv[])
{
    int k,l,m;
    
    k=ob.f1();
    l=ob.f2();
    m=ob.f3();
    
    cout<<"1.temel sınıfa erişti:"<<k<< endl;
    cout<<"1.temel sınıfa erişti:"<<l<< endl;
    
    cout<<"türetilmiş  sınıfa erişti:"<<m<< endl;
    
      
    system("PAUSE");
    return EXIT_SUCCESS;
}
