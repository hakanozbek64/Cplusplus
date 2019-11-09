#include <iostream>
#include <conio.h>
using namespace std;



 main(){
// i  float long char için yer ayýr. bunlara sýrasýyla deger ver . ve delete ile ekrandan gosterdýkten sonra alaný bosalt.

float *f;
long*l;
char *c;

f=new float;
l=new long;
c=new char;

*f=10.2;
*l=100000000;
*c='H';

cout<<*f<<endl<<*l<<endl<<*c;

delete f;
delete l;
delete c;


   getch();
   return 0;
}
