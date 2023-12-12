#include <iostream>
using namespace std;
int main() {
	int a,i,j,k;
	k=0;
	
	cout << " masukan angka =";
	cin >> a ;
	
	for (i=1 ; i<=a; i++){
		if(a%i == 0){
			k++;
		}
	}
	
	if (k == 2){
		cout << "bilangan tersebut adalah bilangan prima"<<endl;
	}else{
	cout <<"bilangan tersebut bukan bilangan prima"<<endl;	
	}

}
