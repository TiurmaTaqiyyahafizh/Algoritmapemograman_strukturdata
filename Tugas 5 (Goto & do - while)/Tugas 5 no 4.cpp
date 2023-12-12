//---------------------------------
//perulangan FOR dengan break
//---------------------------------

#include <stdio.h>
#include <conio.h>
using namespace std;
main ()
{
	int a,b,c,bil;
	a=3;
	b=2; 
	c=1;
    getch();
	printf("bil-a | bil-b | bil-c\n");
	printf("----------------------");
	for ( bil=1;bil<=10;bil++)
	{
		a+=b;
		b+=c;
		c+=2;
		
		printf ("\n%d\t| %d\t|%d",a,b,c);
		if (c==13)
		break;
	}
	getch();
}
