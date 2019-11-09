#include <iostream>
#include <conio.h>

using namespace std;

inline double kup(const double a){

return a*a*a;
}
    
    main(){
           
         double b;
         
         cout<<"kupunuzun bir kenarini giriniz:";
           
         cin>>b;
         
         
         cout<<"hacim:"<<kup(b);
           
         getch();
         system("PAUSE");
    
}
