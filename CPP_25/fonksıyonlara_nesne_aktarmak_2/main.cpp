#include <cstdlib>
#include <iostream>

using namespace std;

class deneme{
      
     int i; 
      public:
             deneme(int n){
                        
           i=n;
                        
                        
      }
      void ata(int n){
           i=n;
           
           }
int goster(){
    
    return i;
    }

};

int kare(deneme a){
    
a.ata(a.goster()*a.goster());
    
    
    cout<<"x'in kopyasi su degerin i degerine sahiptir: "<<a.goster()<<endl;
    }


int main(int argc, char *argv[]){
    
    
  deneme x(5);
  kare(x);
  
  cout<<"x.i main içinde degişiklige ugramaz: "<<x.goster();
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
