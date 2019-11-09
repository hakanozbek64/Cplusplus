#include <iostream>
#include <conio.h>
using namespace std;
class nesdiz{
      int x;
      public:
             
             nesdiz(int n){
                    
                  x=n;
                    
                  }
          int goster(){
              
              return x;
              
                  }

      };

main(){
      
      int i,j;
      nesdiz abc[5][2]={1,2,3,4,5,6,7,8,9,8};
      cout <<"dizilerimizin elemenlari\n";
    
      for(i=0;i<5;i++)
     
      for(j=0;j<2;j++)
      {
      
     cout<<"["<<i<<"]["<<j<<"]:";
     cout <<abc[i][j].goster()<<endl;
     
     }
     
      
    getch();
    return 0;   
       
       
       }
