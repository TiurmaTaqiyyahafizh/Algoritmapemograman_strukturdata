//-----------------------------------//
// pemograman dan pernyataan go to //
// ---------------------------------//
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
	int a,b;
	char lagi;
	atas:
		system ("cls");
		cout << "masukan bilangan =";
		cin >> a;
		b = a%2;
		printf("nilai%d%%2 adalah=%d",a,b);
		printf("\n\ningin hitunglagi [y/t] :");
		lagi = getche();
		if (lagi=='y'|| lagi == 'Y')
		goto atas;
		getch();
		
}
