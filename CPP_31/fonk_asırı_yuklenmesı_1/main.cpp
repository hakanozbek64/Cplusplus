#include <iostream>
#include<conio.h>
using namespace std;
//- degerleri pozitife  ceviriyoruz.

int mutlakdeger(int x){

  if (x<0)
  return x*-1;
  else 
  return x;
}
float mutlakdeger(float y){

if(y<0.0)
return y*-1.0;
else 
return y;

}

main(){
    
    int tamsayi,gercelsayi;
    int x=-100;
    float y=-5.250;
    
    tamsayi=mutlakdeger(x);
    cout<<x <<"sayisinin mutlak degeri:"<<tamsayi<<endl;
    
    gercelsayi=mutlakdeger(y);
    cout<<y <<"sayisinin mutlak degeri :"<<gercelsayi<<endl;
    
    getch();
    return 0;
}

