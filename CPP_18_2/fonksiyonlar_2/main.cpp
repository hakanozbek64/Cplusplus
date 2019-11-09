#include <cstdlib>
#include <iostream>

using namespace std;

// bizden miktar istesin .20 10 5 lik birimlere bölsün ve hepsinin sayýsýný göstersin.
    
    void banka(int para){
       int a,yirmi,on,bes;
       a=para;  
         
         
         if(a%5==0){
                   
             yirmi=a/20;
             a=a-yirmi*20;
            
             on=a/10;      
             a=a-on*10; 
         
             bes=a/5;       
             a=a-bes*5;
         
         cout<<"yirmilik:"<<yirmi<<endl;
         cout<<"onluk:"<<on<<endl;
         cout<<"beslik:"<<bes<<endl;
         }
         
    else 
    
    cout<<"girilen miktar  5 tl ve katlarý olmalýdýr.";
    
    }
    
    main(){
    int miktar ;
    
    cout<<"para miktarini giriniz:";
    cin>>miktar;
    
    banka(miktar);
    
    
    
 
    system("PAUSE");
    return EXIT_SUCCESS;
}
