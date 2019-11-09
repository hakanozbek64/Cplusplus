#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
    int ilkdeger,ikincideger;
    int*ahmet;
    
    ahmet=&ilkdeger;
    *ahmet=10;

    ahmet=&ikincideger;
    *ahmet=30;
    
    
    
    cout<<"&ilkdeger: "<<&ilkdeger<<endl;
    cout<<"ilkdeger: "<<ilkdeger<<endl;
    cout<<"&ikincideger: "<<&ikincideger<<endl;
    cout<<"ikincideger: "<<ikincideger<<endl;
    

    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
