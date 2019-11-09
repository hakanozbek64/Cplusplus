#include <cstdlib>
#include <iostream>

using namespace std;

 class a{
       
      public:
             int i; 
       };
  class b: virtual public a{
     public :
            
           int j;  
     
       };
       
 class c: public virtual a{
       public :
              
              int k;
              
       
       };

class d:public b,public c{
      
      public:
             
             int carpma(){
                return i*j*k; 
                 
                 }
      };


int main(int argc, char *argv[])
{
    d ob;
    
    ob.i=2;
    ob.j=3;
    ob.k=5;
    
    
    cout<<"carpma sonucu:"<<ob.carpma();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
