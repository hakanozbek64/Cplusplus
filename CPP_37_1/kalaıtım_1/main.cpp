#include <cstdlib>
#include <iostream>

using namespace std;



class deneme{
      int x;
      
    public:
      void ata(int n){
    x=n;   
}
     void goster(){
     cout<<x<<endl;
     }
      };
      // public ile kalýtým:
       class turet:public deneme{
             
       int y;
      
    public:
      void atatu(int n){
    y=n;   
   }
     void gostertu(){
     cout<<y<<endl;
     }
     };     
                      

int main(int argc, char *argv[])
{
    turet ob;
    ob.ata(23);
    ob.atatu(12);
    
    ob.goster();
    ob.gostertu();
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
