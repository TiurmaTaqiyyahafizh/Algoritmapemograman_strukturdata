#include <iostream>
using namespace std;
int main() {
	double R,pi;
	pi=3.14;
	
	cout << "LUAS LINGKARAN";
	
	cout << "\n1. Sebuah Lingkaran mempunyai jari-jari :";
	cin>> R;
	cout << "\nmaka luar lingkarannya adalah:";
	cout << "\nL:pi x r x r";
	cout << "\nL: 22/7 x "<<R<<" x "<<R<<""<<endl;
	cout << "\nL:"<< pi*R*R <<"cm^2"<< endl;
	
	
	double T,D;
	R=2;
	
	cout << "\n2. Sebuah lingkaran memiliki Diameter:";
	cin >> D;
	
	cout << "\nmaka luas lingkaran adalah:";
	cout << "\ndiketahui :";
	cout << "\nDiameter :"<<D<<""<<endl;
	cout << "\nJari-jari : ?";
	cout << "\n";
	cout << "\nJARI JARI = Diameter : 2";
	cout << "\nJARI JARI ="<<D<<": 2"<<endl;
	cout << "JARI JARI ="<< D/R<<endl;
	T=D/2;
	cout << "\nLuas Lingkaran = pi x r x r";
	cout << "\nLuas Lingkaran = 22/7 x"<<T<<"x"<<T<<""<<endl;
	cout << "Luas Lingkaran ="<<pi*T*T<<"cm^2"<<endl;
	
	{
		double r,h,x;
		cout << "\n";
		cout << "VOLUME TABUNG";
		cout << "\n===================================";
		
		cout << "\n1. Diketahui sebuah tabung memiliki jari jari:";
		cin >> r;
		cout << "dan memiliki tinggi:";
		cin >> h;
		cout << "\nRumus Volume Tabung = pi x r^2 x T";
		cout << "\nRumus Volume Tabung ="<<pi<<"x"<<r<<"^2 x"<<h<<""<<endl;
		
		x=r*r;
		cout << "\nVolume Tabung ="<<pi*x*h<<"cm^3"<<endl;
		
		double d,z,s,e,l;
		e=2;
		cout << "\n2. diketahui Diameter sebuah toples adalah =";
		cin >> d;
		cout << "dan tinggnya adalah =";
		cin >> s;
		cout << "\nDiketahui";
		cout << "\nDiameter ="<<d<<"";
		cout << "\nTinggi="<<s<<"";
		cout << "\njari - jari = ?";
		cout << "\n"<<endl;
		cout << "JARI-JARI=";
		cout << "\nj = Diameter : 2";
		cout << "\nj = "<<d<<" : 2";
		cout << "\nj = "<<d/e<<endl;
		z=d/e;
		l=z*z;
		cout << "\nVolume Tabung = pi x r^2 x t";
		cout << "\nVolume Tabung = "<<pi<<"x"<<z<<"^2 x"<<s<<endl;
		cout << "Volume Tabung = "<<pi*l*s<<"cm^3"<<endl;
	
		
			
			
	}
	
}

