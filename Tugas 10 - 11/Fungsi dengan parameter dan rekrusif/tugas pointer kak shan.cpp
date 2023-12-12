#include <iostream>
using namespace std;

void cek(int *c){
	int r, s;
	
	r = *c% 2;
	
	if(r == 0){
//		cout<<"Bilangan Genap\n"<<*c;
		*c = *c +1;
		cout<<" "<<*c<<" ";
	}
	else{
//		cout<<"Bilangan Ganjil\n"<<*c<<" ";
	}
}

//int cek(int *c){
//	int r, n;
//	r = *c% 2;
//	if(r==0){
//		n = *c + 1;
//		return n;
//	}
//	else{
//		return *c;
//	}
//}

int main(){
	int t, p, *d;
	d=&p;
	cout<<"Masukan Bilangan = ";
	cin>>p;
	t = p;
	cout<<p<<" ";
//	cout<<cek(&p);
	cek(&p);
	cout<<t;
	cout<<" "<<*d;
	return 0;
}
