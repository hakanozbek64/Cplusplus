#include <iostream>
#include <conio.h>
using namespace std;

class deneme{
      
      int n,d;
      
      public:
             
             deneme(int i,int j){
                        n=i;
                        d=j;
                        }
      friend int fonk(deneme a);
   
};

int fonk(deneme a){
  if(!(a.n/a.d))
  return 1;
  else
  return 0;
}
 main(){
    
deneme ob1(8,4);
deneme ob2(7,3);

if(fonk(ob1))

cout<<"8,4 'un tam katidir.\n";
else
cout<<"8,4 'un tam kati degildir.\n";


if(fonk(ob2))

cout<<"7,3 'un tam katidir.\n";
else
cout<<"7,3 'un tam kati degildir.\n";
    
   getch();
   return 0;
}
