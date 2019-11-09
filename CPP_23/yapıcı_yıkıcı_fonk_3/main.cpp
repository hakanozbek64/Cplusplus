#include <cstdlib>
#include <iostream>

using namespace std;

class deneme{
     int a,b,c; 
      public :
             deneme(int x,int y,int z){
                    a=x;  
                    b=y;
                    c=z;
                        }
                        void goster(){
                           cout<<a<<endl<<b<<endl<<c<<endl;  
                             }
              
      };


int main(int argc, char *argv[])
{
    
    deneme test(15,45,60);
    
    test.goster();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
