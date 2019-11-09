#include <cstdlib>
#include <iostream>

using namespace std;

// <,> iþleclerini aþýrý yükle.
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
  int operator<(test ob);
  int operator>(test ob);               
                                 
 };
 int test :: operator<(test ob){
     
     return x <ob.x&& y<ob.y;
     
     }
     
   int test ::operator>(test ob){
       
      return x>ob.x&&y>ob.y;  
      
       }  
int main(int argc, char *argv[])
{
    test a(1,4);
    test b(3,6);
    
    if(a>b)
    cout<<"a'nin 2 degeride b' den buyuktur."<<endl;
    else
    cout<<"a'nin 2 degeride b'den buyuk degildir."<<endl;
    
    if (a<b)
    cout<<"a'nin 2 degeride b' den kucuktur."<<endl;
    else
    cout<<"a'nin 2 degeride b' den kucuk degildir."<<endl;
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
