#include <cstdlib>
#include <iostream>

using namespace std;

class deneme{
     int a,b,c; 
      public :
             deneme(int x,int y,int z){
                    a=x;  
                    b=y;
                    c=z;
                        }
                        void goster(){
                           cout<<a<<endl<<b<<endl<<c<<endl;  
                             }
           ~deneme(){
                     
                     }                  
                             
      };


int main(int argc, char *argv[])
{
    int k,l,m;
    cout<<"3 tane sayi giriniz:\n";
    cin>>k>>l>>m;
    deneme test(k,l,m);
    
    test.goster();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
