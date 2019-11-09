#include <iostream>
#include <conio.h>
using namespace std;

class ceviri {
      int fit,inc;
      public:
        ceviri(int f){
                  fit=f;
                  inc=fit*12; 
                  cout<<fit <<"fit " <<inc<<" .dir\n";
                   }
      
      };


 main(){
        ceviri x(12);
        ceviri y(15);
        
  getch();
  return 0;
}
