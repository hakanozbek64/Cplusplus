#include <iostream>
#include<conio.h>
 using namespace std;
 
 void fonk(int &n){
    n+=100;//->i+=100->i=i+100;
      
      
      }
      
  main(){
         
    int i=200;
    fonk(i);     
         
       cout<<"i'nin yeni degeri:" <<i;
       
       getch();
       return 0;  
         }    
