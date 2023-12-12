#include <iostream>
using namespace std;

int main(){
cout<<"Soal Nomor 2"<<endl;
	
	int a, t = 0, z = 0;
	
	for(a = 1; a <= 20; a++){
		if ( a % 2 == 1){
			cout<< a;
			t = t + a;
		}
		else{
			if (a == 19 || a == 20){
			cout<< "";
			}
			else {
				cout<< " + ";
			}
		
		}
	}
	cout << " = " << t;

	cout<<"\n\n===========================================\n";
	cout<<"Soal Nomor 3\n"<<endl;
	
	int v, n = 0, o = 0;
	
	for(v = 2; v <= 20; v++){
		if ( v % 2 == 0){
			cout<< v;
			n = n + v;
		}
		else{
			if ( v == 20){
			cout<< "";
			}
			else {
				cout<< " + ";
			}
		
		}
	}
	cout << " = " << n;
	
	cout<<"\n\n===========================================\n";
}



//cout<<"Soal Nomor 2\n\n";
//	
//	int x, y = 0, z = 0;
//	
//	for(x = 1; x <= 20; x++){
//		if ( x % 2 == 1){
//			cout<< x;
//			y = y + x;
//		}
//		else{
//			if (x == 19 || x == 20){
//			cout<< "";
//			}
//			else {
//				cout<< " + ";
//			}
//		
//		}
//	}
//	cout << " = " << y;
//
//	cout<<"\n\n===========================================\n";
//	cout<<"Soal Nomor 3\n\n";
//	
//	int m, n = 0, o = 0;
//	
//	for(m = 2; m <= 20; m++){
//		if ( m % 2 == 0){
//			cout<< m;
//			n = n + m;
//		}
//		else{
//			if ( m == 20){
//			cout<< "";
//			}
//			else {
//				cout<< " + ";
//			}
//		
//		}
//	}
//	cout << " = " << n;
//	
//	cout<<"\n\n===========================================\n";
