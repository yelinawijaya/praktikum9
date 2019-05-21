#include <iostream.h>
#include <conio.h>

void tukarAB (int a, int b)
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
   cout<<"masukkan nilai a : ";cin>>a;
   cout<<"masukkan nilai b : ";cin>>b;
   cout<<"\n Nilai a dan b sebelum masuk fungsi tukarAB: \n ";
   cout<<"Nilai a = "<<a<<" dan b "<<b<<endl<<endl;
   getch();
   return(0);

}



