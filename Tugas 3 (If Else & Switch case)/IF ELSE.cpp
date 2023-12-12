#include <iostream>
using namespace std;
int main () {
	
	char nama[60];
	float a, b, c, ra;
	cout << "masukan nama siswa =";
	cin >>nama;
	cout << "Nilai pertandingan I =";
	cin >> a;
	cout << "Nilai pertandingan II =";
	cin >> b;
	cout << "Nilai pertandingan III =";
	cin >> c;
	
	ra=(a+b+c)/3;
	
	if(ra>0){
		if(ra>=70 && ra<85){
			cout << "siswa yang bernama "<<nama;
			cout << "\nmemperoleh rata-rata "<<ra<<" dari hasil yang di lombakan"<<endl;
			cout << "hadiah yang di dapatkan adalah uang sebesar Rp.2.500.000"<<endl;
		}else if (ra>=85){
			cout << "siswa yang bernama "<<nama;
			cout << "\nmemperoleh rata-rata "<<ra<<" dari hasil yang di lombakan"<<endl;
			cout << " hadiah yang di dapatkan adalah komputer core i5"<<endl;
		}else if (ra<70){
			cout << "siswa yang bernama "<<nama;
			cout << "\nmemperoleh rata-rata"<<ra<<" dari hasil yang di lombakan"<<endl;
			cout << "hadiah yang di dapatkan adalah hiburan"<<endl;
		}
}
return 0;
}
