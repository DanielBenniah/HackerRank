#include<stdio.h>

int sum(int a, int b =5)
{
	return a+b;
}
int main()
{
	printf("%d",sum(2,3));
	return 0;	
}
