
#include <iostream>
#include <conio.h>
using namespace std;

class  deneme{

int x;
public:
       deneme(int n){
                  x=n;
                  }
int goster(){
    return x;
    
    }

};
main(){
       deneme a[5]={3,7,9,2,6};
       int i;
       
       deneme*p;
       
     p=a;
     
     for(i=0;i<5;i++){
      cout <<p->goster()<<endl;
      p++;
        
        }
        
        
        getch();
        return 0;
        
        


}
