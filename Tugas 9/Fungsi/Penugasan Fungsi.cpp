#include <iostream>
#include <conio.h>
using namespace std;
/*
void tambah (int m, int n){
	m+=5;
	n+=7;
	cout << "nilai di dalam fungsi tambah()"<<endl;
	cout<<"m= "<<m<<" n="<<n;
}
*/
void tambah (int m, int n);

main()
{
	int a,b,m,n;
	a=5;
	b=9;
	
	cout <<"nilai sebelum fungsi di gunakan ="<<endl;
	cout << "a ="<<a<<" b ="<<b<< endl;
	tambah (a,b);
	cout << "nilai setelah fungsi digunakan"<<endl;
	//tambah (m,n);
	cout << "a ="<<a<< " b ="<<b<<endl;
	getche();
}

void tambah (int m, int n,int a, int b)
{
	m=5+a;
	n=7+b;
	cout << "nilai di dalam fungsi tambah()"<<endl;
	cout<<"m= "<<m<<" n="<<n<<endl;
}

