#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
    int *p;
    p=new int;
    
    *p=1000;
    
    cout<<"p deki tamsayi:"<<*p<<endl;
    
    delete  p;
    

    system("PAUSE");
    return EXIT_SUCCESS;
}
