#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    // katar okumak
    
    char deneme [30];
    int x;
    
    cout<<"birþeyler yazýnýz.\n";
    gets(deneme);
    for(x=0;x<=deneme[x];x++)
    cout<<deneme[x]<<"\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
