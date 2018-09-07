#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int q; 
    scanf("%d",&q);
    for(int a0 = 0; a0 < q; a0++)
    {
        long int n;
	int i=0;
	scanf("%ld",&n);
	for(i=1;i<=n;i++)
	{
		if((long int)pow(2,i-1)>n)
		break;
	}
	long int k=(long int)pow(2,i-2);
	long int f=k-1;
	k=(long int)(n-k);
	k=(long int)(f-k);	
	printf("%ld",k);
    }
    return 0;
}

