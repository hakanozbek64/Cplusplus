#include <cstdlib>
#include <iostream>

using namespace std;



class deneme{
      int x;
      
    public:

     int goster(){
     return x=25;
     }
      };
      // private ile kal�t�m:
       class turet:private deneme{
             
       int y;
      
    public:
   
    int  gostertu(){
    return y=56;
     }
     int fonk(){
     int z=goster();
     
     return z;
     }
     }ob;     
                      

int main(int argc, char *argv[])
{
    cout<<"temel s�n�ftan gelen:"<<ob.fonk()<<endl;
    cout<<"t�retilmi� s�n�ftan gelen:"<<ob.gostertu();
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
