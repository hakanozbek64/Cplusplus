#include <cstdlib>
#include <iostream>

using namespace std;

class deneme{
      
     int i; 
      public:
             deneme(int n){
                        
           i=n;
                        
                        
      }
int goster(){
    
    return i;
    }

};

int kare(deneme a){
    
    return a.goster()*a.goster();
    
    }


int main(int argc, char *argv[]){
    
    
  deneme x(5);
  deneme y(7);
  
  cout<<kare(x)<<endl<<kare(y)<<endl;  
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
