#include <iostream.h>
#include <conio.h>

void luas(int &ls, int p, int l)
{ ls=p*l; }
main(){
	int pj,lb,hsl;
   cout<<"Panjang = ";cin>>pj;
   cout<<"Lebar	= ";cin>>lb;
   luas(hsl,pj,lb);
   cout<<"\nLuasnya = "<<hsl;
   getch();}