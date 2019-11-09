#include <cstdlib>
#include <iostream>

using namespace std;

class personel{
      public:
             
             personel(){
                       cout<<"yap.fonk.-personel"<<endl;
                        
                        }
            ~ personel(){
                  
                      cout<<"yýk.fonk.-personel"<<endl; 
                      }
      };
      
      class akademisyen : private personel {
             public:
             
             akademisyen(){
                       cout<<"yap.fonk.-akademisyen"<<endl;
                        
                        }
           ~ akademisyen(){
                   
                   cout<<"yýk.fonk.-akademisyen"<<endl; 
                   }
      };
      class idari : private personel {
             public:
             
             idari(){
                       cout<<"yap.fonk.-idari"<<endl;
                        
                        }
      ~idari(){
                  cout<<"yýk.fonk.-idari"<<endl; 
                  }
      };
      class arasgor : public akademisyen {
             public:
             
             arasgor(){
                       cout<<"yap.fonk.-arasgor"<<endl;
                        
                        }
      ~ arasgor(){
                  cout<<"yýk.fonk.-rasgor"<<endl; 
                  }     
      };
      class ogrgor  : public akademisyen {
             public:
             
             ogrgor(){
                       cout<<"yap.fonk.-ogrgor"<<endl;
                        
                        }
             ~ ogrgor(){
                 
                      cout<<"yýk.fonk.-ogrgor"<<endl; 
                      }          
      };

int main(int argc, char *argv[])
{
    ogrgor hakanozbek;
    cout<<"merhaba\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
