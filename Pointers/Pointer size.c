#include <stdio.h>
#include <stdlib.h>
struct k
{
	int n,t;
	char f;
	float t1;
	double k23;
	
}k1,k2;
struct rectangle
{
	struct k k3;
	int f1;
}k31;

int main()
{
    int a = 5;

    int* int_pointer;    // an integer pointer
    float* float_pointer;  //a float pointer
    char* char_pointer;   //a character pointer

    printf("size of an int pointer =  %d\n", sizeof(int_pointer));
    printf("size of an float pointer =  %d\n", sizeof(float_pointer));
    printf("size of an char pointer =  %d\n", sizeof(char_pointer));
	printf("size of an n is =  %d\n", sizeof(k1.n));
	printf("size of an t is =  %d\n", sizeof(k2.t));
	printf("size of k is %d",sizeof(k31.k3.t));
	printf("\n\n");
	float x1=2.567,x2=3;
	int f;
	f=x1;
	printf("%f",f);
    return 0;
}
