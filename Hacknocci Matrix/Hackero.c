#include <stdio.h>
#include <conio.h>

long int hackero(int n);
int main()
{
	int i;
	for(i=1;i<50;i++)
	printf("\nSeries:%ld",hackero(i));
	return 0;
}
long int hackero(int n)
{
	if(n==1)
	return 1;
	else if(n==2)
	return 0;
	else if(n==3)
	return 1;
	else
	return ((1*((hackero(n-1))))+(2*((hackero(n-2))))+3*((hackero(n-3))))%2;
}
