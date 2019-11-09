#include <iostream>
#include <conio.h>

using namespace std;

class deneme{
     
    char s[20];
    public:
           void ata(char *str){
                
    strcpy(s,str);
}
    
    int goster(){
        cout<<s;
        
        
        }   
    }ob;
    
    deneme fonk(){
        char s[20];
        deneme  str;
         cout<<"bir katar giriniz:" ;
         cin>>s; 
           
          str.ata(s);
          return str; 
           
           }
    
    
    

 main(){
  
  
  ob=fonk();
  ob.goster();
  
   getch();
   return 0;
}
