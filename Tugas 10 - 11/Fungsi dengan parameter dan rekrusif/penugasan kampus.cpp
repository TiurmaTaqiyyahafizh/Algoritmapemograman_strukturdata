//penggunaan call by referance (program tambah nilai)
/*
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
tambah (int*c, int*d);
main ()
{
	int a,b;
	a = 4;
	b = 6;
	clrscr();
	cout << "nilai sebelum pemanggilan fungsi";
	cout << "\na="<<*a<<" b="<<*b;
	tambah (&a,&b);
	cout<<endl;
	cout<<:\n Nilai setelah pemanggilan fungsi";
	cout << "\na="<<*a<<" b="<<*b;
	getch();
{
tambah (int*c,int*d)
}
*c+=7;
*d+=5;
cout << endl;
cout << "\n Nilai di akhir fungsi tambah()";
cout << "\nc="<<*c<<" d="<<*d;

	
}
*/
/*
#include <iostream>
using namespace std;
void penjumlahan(int&total)
{
	total = total+1;
}

	int main()
{
	int hitung = 20;
	int result=0;
	penjumlahan(hitung);
	cout<<"---pas by referance---\n";
	cout <<"total ";
	cout << hitung;
	return 0;
	
}
*/

//pointer===================================================================================
//referance * = meniyimpan alamat dari variabel di memori // int *b
//dereferance 

#include <iostream>
using namespace std;

void kata(string *b)
{
	cout << "alamat :"<<b<<endl; // alamat
	cout << "kata : "<< *b; 
}

int main()
{
	string x;
	cout << "masukan kata= ";
	cin >>x;
	kata(&x);
	return 0;
}


