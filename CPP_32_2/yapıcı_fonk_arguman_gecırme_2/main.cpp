#include <iostream>
#include <conio.h>
using namespace std;
  
  // varsayýlan fonksiyona argüman gecirme.
  
        void fonk(int a=0,int b=0){
        
        cout<<a<<"-"<<b<<endl;
        
        }
main() {



  fonk();
  fonk(30);
  fonk(30,45);
    getch();
    return 0;

}
