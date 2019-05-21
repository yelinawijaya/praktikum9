#include <iostream.h>
#include <conio.h>
#include <math.h>

int hitung(int x,int y)		//x dan y = parameter input
{
int ls;
ls=x*y;
return(ls);
}

void main()
{
int pilih;
int panjang,lebar,alas, tinggi, sisi;
float luas;
do
	{
   clrscr();
   cout<<"Pilihlah ---------------> "<<endl;
   cout<<"1. Luas Persegi Panjang \n";
   cout<<"2. Luas Segitiga \n";
   cout<<"3. Luas Bujur Sangkar \n";
   cout<<"4. Selesai \n";
   cin>>pilih;

   switch(pilih)
   {
   	case 1: 	cout<<"Masukkan nilai panjang : ";
               cin>>panjang;
               cout<<"Masukkan nilai lebar : ";
               cin>>lebar;
               luas=hitung(panjang,lebar);
               break;
      case 2:	cout<<"Masukkan nilai alas : ";
      			cin>>alas;
               cout<<"Masukkan nilai tinggi : ";
               cin>>tinggi;
               luas=hitung(alas,tinggi)*0.5;
               break;
      case 3:	cout<<"Masukkan nilai sisi : ";
      			cin>>sisi;
               luas=hitung(sisi,sisi);
               break;
      case 4:	cout<<"Terima Kasih, Tuhan Memberkati";
   }

if (pilih != 4);
cout<<"Luasnya adalah : "<<luas;

getch();
}
while (pilih != 4);
}




