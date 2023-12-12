#include <iostream>
using namespace std;

void Persegi(int a, int b);
void Lingkaran(double x);
void Tabung (double k, double t);

int main()
{
	// persegi panjang
	int j;
cout << "================================================================================================"<<endl;	
cout << "PERSEGI PANJANG "<<endl;
cout << "------------------------------------------------------------------------------------------------"<<endl;
    
	for (j=0; j<2; j++) {
	int p,le;
	cout << "Luas Persegi panjang ke - "<< j+1 <<endl;
	cout  << "Masukan nilai Panjang =";
	cin >> p;
	cout << "Masukan nilai Lebar =";
	cin >> le;
	Persegi (p,le);
	cout<<endl;
    }
cout << "================================================================================================";
cout << endl;
    
cout << " LINGKARAN" << endl;
cout << "------------------------------------------------------------------------------------------------"<<endl;

    //lingkaran
 for (j=0; j<2; j++) {
	double ja;
	cout << "Luas Lingkaran ke - "<< j+1 <<endl;
	cout  << "Masukan nilai Jari - Jari =";
	cin >> ja;
	Lingkaran(ja);
	cout<<endl;
    }   
cout << "================================================================================================";  
cout << endl;


cout << "VOLUME TABUNG"<<endl;
cout << "------------------------------------------------------------------------------------------------"<<endl;

//volume  tabung
for (j=0; j<2; j++) {
	double q,w;
	cout << "Volume Tabung ke - "<< j+1 <<endl;
	cout  << "Masukan nilai Jari - Jari =";
	cin >> q;
	cout << "Masukan Nilai Tinggi Tabung =";
	cin >>w;
	Tabung(q,w);
	cout<<endl;
    }   

}

void Persegi(int a, int b){
	int luas;
	luas = a*b;
	cout << "Luas Persegi panjang tersebut adalah ="<<luas<<endl;
}

void Lingkaran(double x){
	double v,li;
	v=3.14;
	li=v*x*x;
	cout << "Luas Lingkaran Tersebut adalah =" << li <<endl;

}

void Tabung(double k, double t){
	double v, vol;
	v=3.14;
	vol=v*(k*k)*t;
	cout << "Volume Tabung Tersebut adalah =" << vol <<endl;
}

