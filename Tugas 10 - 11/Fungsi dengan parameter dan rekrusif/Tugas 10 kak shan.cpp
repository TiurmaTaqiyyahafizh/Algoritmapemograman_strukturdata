#include <iostream>
using namespace std;

long int pow(int x, int y);

int main ()
 {
int A,B;
cout << "Masukan Nilai A :";
cin>> A;
cout << "Masukan Nilai B :";
cin >> B;
cout << A << " Dipangkatkan "<< B << " :"<< pow(A,B);


}

long int pow(int x, int y){
	int i,pow=1;
	if (y==0)
	return 1;
	for (i=1; i<=y; i++)
	pow = pow*x;
	return pow;
}
