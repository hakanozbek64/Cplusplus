#include <cstdlib>
#include <iostream>

using namespace std;

class deneme{
     int a; 
      public :
             deneme(int x){
                    a=x;    
                        }
                        void goster(){
                           cout<<a;  
                             }
      };


int main(int argc, char *argv[])
{
    deneme test(15);
    
    test.goster();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
