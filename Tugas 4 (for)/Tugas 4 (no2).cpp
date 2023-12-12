#include <iostream>
using namespace std;
int main () {
	int a, g, G, m;
	cout << "perulangan"<<endl;
	for (a=1;a<=20;a++){
		cout << a << endl;
	}
	cout <<endl;
	cout << "perulangan Menurun"<<endl;
	for (m=20 ; m >= 1 ; m--) {
		cout << m << endl;
	}
	
	cout << endl;
	cout << "Ganjil"<< endl;
	for (g=1 ; g<=20; g++) {
		if (g%2!=0) {
			cout << g <<endl;
		}
	}
	
	cout << endl;
	cout << "genap"<< endl;
	for (G=1 ; G <=20; G++){
		if (G%2==0){
			cout << G << endl;
		}
		
	}

return 0;
	
}


