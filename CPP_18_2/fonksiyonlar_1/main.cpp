#include <cstdlib>
#include <iostream>

using namespace std;

int x,y;

int topla (int x,int y);

float ortalama(int x,int y);





main(){
       
 // iki sayýnýn hem toplamasýný hemde ortalamasýný alalým.      


cout<<"2 sayi giriniz\n";
cin>>x>>y;

cout<<"toplamlari:"<<topla(x,y)<<endl;

cout<<"ortalamalari:"<<ortalama(x,y)<<endl;



    system("PAUSE");
    return EXIT_SUCCESS;
}


int topla (int x,int y){ 
    return x+y;
    
    }
    
    float ortalama(int x,int y){
          
      int ort;
          
          ort=topla(x,y)/2;
          return ort;
          }
