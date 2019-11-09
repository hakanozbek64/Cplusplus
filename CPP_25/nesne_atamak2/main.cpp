#include <iostream>
#include <conio.h>

using namespace std;
class deneme{
     int a,b;
     public:
            void ata(int x,int y){
               a=x;
               b=y;  
                 
                 } 
            void goster(){
                 
      cout <<a<<""<<b<<endl;
                    
                      }
                 }ob1,;
     class deneme2{
     int a,b;
     public:
            void ata(int x,int y){
               a=x;
               b=y;  
                 
                 } 
            void goster(){
                 
      cout <<a<<""<<b<<endl;
                    
                      }
                 }ob2;
     

 main(){
    
    ob1.ata(30,40);
    ob2=ob1;
    
    ob1.goster();
    ob2.goster();
    
    getch();
    return 0;
}
