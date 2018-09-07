#include <stdio.h>
int a=5;
void main()
{
	int x;
	printf("\n%d",~a);
	printf("\n%d",a&a);
	printf("\n%d",~a+a);
	printf("\n%d",~a+a&a);
	
	printf("\n%d",~a+a&a+a);
	printf("\n%d",a<<a);
	x=~a+a&a+a<<a;
}
