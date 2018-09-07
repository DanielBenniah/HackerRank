#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int i,int j)
{
	if(i>j)
	return i;
	return j;
}
int main() {

    int n,k;
    scanf("%d %d",&n,&k);
    long long int* a=malloc(sizeof(long long int)*n);
    for(int i=0;i<n;i++)
        scanf("%lld",&a[i]);
    int* number=malloc(sizeof(int)*k);
    for(int i=0;i<k;i++)
        number[i]=0;
    for(int i=0;i<n;i++)
       { 
         a[i]=a[i]%k;
         number[a[i]]+=1;
       }
    printf("\nNumber of numbers:\n");
    for(int i=0;i<k;i++)
        printf("number[%d] = %d\n",i,number[i]);
    printf("Array after simplification:\n");
    for(int i=0;i<n;i++)
        printf("a[%d] = %lld\n",i,a[i]);
    int size;
    if(number[0]==0)
    size=0;
    else
    size=1;
    if(k%2==0)
    number[k/2]=number[k/2]/2;
	 printf("\nNumber of numbers 2:\n");
    for(int i=0;i<k;i++)
        printf("number[%d] = %d\n",i,number[i]);
    for(int i=1;i<=k/2;i++)
    {
        size+=(max(number[i],number[k-i]));
        printf("\nNumber[%d] = %d",i,number[i]);
        printf("\nNumber[%d] = %d",k-i,number[k-i]);
    }
    printf("\n\n%d",size);
    return 0;
}

