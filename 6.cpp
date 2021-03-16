#include<stdio.h>
int main()
{
	int a;
	char* x;
	x = (char*)&a;
	a = 512;
	x[0] = 1;
	//a+=x[0];
	printf("%d", (int)*x);
	//prints 1;
	printf("%d\n", a);
	//prints 513
	return 0;
}
