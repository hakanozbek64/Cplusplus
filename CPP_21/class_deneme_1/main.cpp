#include <cstdlib>
#include <iostream>

using namespace std;

class deneme{
      private:
              int x;
              
        public:
              
  void fonk1(int no);
  int fonk2();        
              }a,b;
              
 void deneme::fonk1(int no){
    x=no;
      }           
              
int deneme::fonk2(){
    
    return x;
    }



 main(){

   a.fonk1(5);
   b.fonk1(20); 

    cout<<a.fonk2()<<endl;
    cout<<b.fonk2()<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

