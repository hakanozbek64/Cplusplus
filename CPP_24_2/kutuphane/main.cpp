#include <cstdlib>
#include <iostream>

using namespace std;

class kutuphane{
    char kitapadi[20] ;
    char yazar[20];
    int kitapadedi;
    
    public:
    void sakla (char*ka,char*y,int sa){
      strcpy(kitapadi,ka);
      strcpy(yazar,y);  
      kitapadedi=sa;   
        
         }
    void goster(){
         
         cout<<"kitap adi:"<<kitapadi<<endl;
         cout<<"yazarin adi:"<<yazar<<endl;
         cout<<"kitabin sayisi:"<<kitapadedi<<endl;
         }  
    
      }ob1,ob2,ob3;





int main(int argc, char *argv[])
{
    
    ob1.sakla("microelectronic circuıts ","sedra simith",3);
    ob2.sakla("temel ogrenim klavuzu ","herbert s.",2);
    ob3.sakla("dc devre analizi ","h.selek",1);
    
    ob1.goster();
    ob2.goster();
    ob3.goster();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
