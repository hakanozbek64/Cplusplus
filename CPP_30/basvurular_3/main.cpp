#include <iostream>
#include<conio.h>
 using namespace std;

 void fonk (int x,int  &once,int &sonra){
   once=x-1;
   sonra=x+1;
      
      
      }
      
  main(){
       int x=10,y,z;
       fonk(x,y,z);
       
       cout<<"once"<<y<<endl<<"sonra" <<z;
    
       
       getch();
       return 0;  
         }    
