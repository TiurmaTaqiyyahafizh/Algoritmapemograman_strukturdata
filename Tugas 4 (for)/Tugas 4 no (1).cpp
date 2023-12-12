#include <iostream>
using namespace std;
int main(){
	int h,a,b;
	cout << "masukan angka =" ;
	cin>>h;
	
	for (a=1; a<=h; a++){
		for (b=1 ; b<=h ; b++){
			cout << a;
		}
		cout << endl;
	}
	return 0;
}
