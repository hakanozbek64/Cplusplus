#include <cstdlib>
#include <iostream>

using namespace std;

class personel {
     public:
            
         personel(){
                    
                cout <<"yap.fonk-perso." <<endl;
                   
                    }
                    ~ personel(){
                    
                cout <<"y�k.fonk-perso." <<endl;    
      
                     }

};

class akademisyen :public personel{
 
   public:
            
        akademisyen(){
                    
                cout <<"yap.fonk-akademisyen." <<endl;
                   
                    }
                    ~ akademisyen(){
                    
                cout <<"y�k.fonk-akademisyen." <<endl;    
      
                     }

};

class idari : public personel {
      public:
            
        idari(){
                    
                cout <<"yap.fonk-idari." <<endl;
                   
                    }
                    ~ idari(){
                    
                cout <<"y�k.fonk-idari." <<endl;    
      
                     }
};

class belbas : public akademisyen,public idari {

 public:
            
         belbas(){
                    
                cout <<"yap.fonk- belbas." <<endl;
                   
                    }
                    ~ belbas(){
                    
                cout <<"y�k.fonk- belbas." <<endl;    
      
                     }


};


int main(int argc, char *argv[])
{
    
    akademisyen ob1;
   
    idari ob2;
    belbas ob3;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
