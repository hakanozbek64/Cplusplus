#include <cstdlib>
#include <iostream>

using namespace std;

// ++ ve -- işaretlerini aşırı yükleme.
//a(x1,x2) ve b(x2,y2)
 class test {
       int x,y;
       public:
          test(){
                     
                x=0;
                y=0;
                     
                     }
          test(int a,int b){
                  x=a;
                  y=b; 
            
                 }
  test operator++();
             
      void  goster(int &k,int &l)  {
            
            k=x;
            l=y;
            }                         
 };

test test :: operator++(){
     
  x++;
  y++;
  
  return *this;
     
     }
     
    
int main(int argc, char *argv[])
{
   
   test a(1,3);
   int k1,k2;
   ++a;// nesne degeri  1 atrırılıyor.
   
   a.goster(k1,k2);
   cout<<"x:"<<k1<<endl;
   cout<<"y:"<<k2;
   
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
