#include <iostream.h>
#include <conio.h>

void tukarAB (int &a, int &b)
{	int temp;
	temp = a;
   a = b;
   b = temp;
   cout<<"dalam fungsi tukarAB \n";
   cout<<"nilai a = "<<a<<" dan nilai b = "<<b<<endl;
   //fungsi bertipe void tidak mengembalikan nilai
}

int main()
{
	int a,b;
   cout<<"Masukkan nilai a : ";cin>>a;
   cout<<"Masukkan nilai b : ";cin>>b;
   cout<<"\n nilai a dan b sebelum masuk fungsi tukarAB: \n";
   cout<<"nilai a = "<<a<<" dan b "<<b<<endl<<endl;

   //a dan b dikirim ke fungsi tukarAB
   tukarAB(a,b);
   cout<<"\nNilai a dan b sesudah keluar fungsi tukarAB: \n";
   cout<<"Nilai a = "<<a<<" dan b "<<b<<endl<<endl;
   getch();
   return(0);
}