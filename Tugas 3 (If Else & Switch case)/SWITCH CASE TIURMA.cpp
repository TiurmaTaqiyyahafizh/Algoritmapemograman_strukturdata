#include <iostream>
using namespace std;
int main ()
{
	char nama [40];
	int a, b, c, ra;
	cout << "Nama Siswa =";
	cin >> nama;
	cout << "Nilai pertandingan I =";
	cin >> a;
	cout << "nilai pertandingan II =";
	cin >> b;
	cout << "nilai pertandingan III =";
	cin >> c;
	
	ra=(a+b+c)/3;
	
//	cout << "\n===================================";
	
	switch (ra){
		case 1 ... 69 :
			cout << "\nsiswa yang bernama "<<nama;
			cout << "\nmemperoleh nilai rata-rata "<< ra <<" dari hasil yang di lombakan" << endl;
			cout << "hadiah yang di dapatkan adalah hiburan"<<endl;
			break;
			
		case 70 ... 84 :
			cout << "\nsiswa yang bernama "<< nama;
			cout << "\nmemperoleh nilai rata-rata "<< ra << "dari hasil yang di lombakan" << endl;
			cout << "hadiah yang di dapatkan adalah uang senilai Rp.2.500.000" << endl;
			break;
			
		case 85 ... 100 :
			cout << "\nsiswa yang bernama "<< nama;
			cout << "\nmemperoleh nilai rata-rata "<<ra<<"dari hasil yang di lombakan"<<endl;
			cout << "hadiah yang di dapatkan adalah komputer core i5"<< endl;
			break;
				
	}
	return 0;
}
