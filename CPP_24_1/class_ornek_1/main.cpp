#include <cstdlib>
#include <iostream>

using namespace std;

class deneme{
   int a;
   public:
          void ata(int x){
          
          a=x;    
       
       
       }
int goster(){
    return a;
 }
    }test1,test2;





int main(int argc, char *argv[])
{
    
   test1.ata(6666) ;
   test2.ata(1453);
    
    cout<<test1.goster()<<endl<<test2.goster();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
