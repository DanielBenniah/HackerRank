#include <stdio.h>

void test()
{	int a=5;
	a=a+1;
	printf("\n a = %d",a);
}
int a=10;
int main()
{
	test();
	test();
	test();
	int number;
	int *p;
	p=&number;
	printf("\naddress = %d",p);
	{
	int a=5;
	printf("\na = %d",a);}
	printf("\na = %d",a);
	return 0;
}
