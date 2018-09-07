#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int m; 
    scanf("%d %d",&n,&m);
    int *c = malloc(sizeof(int) * m);
    for(int c_i = 0; c_i < m; c_i++){
       scanf("%d",&c[c_i]);
    }
    if(n==m)
        printf("0\n");
    else
      {
        int i=0,j=0,maximum=0;
        int* minimum=malloc(sizeof(int)*n);
        for(int i=0;i<n;i++)
		minimum[i]=1000000;
        for(int i=0;i<n;i++)
        {
        	for(int j=0;j<m;j++)
        	{
        		printf("\ni = %d",i);
        		printf("\nc[%d] = %d",j,c[j]);
        		printf("\nCurrent minimum value = %d",minimum[i]);
        		if(abs(c[j]-i)<minimum[i])
        		{
        			minimum[i]=abs(c[j]-i);
        			printf("\nAfter statemen, minimum = %d",minimum[i]);
        		}
        	}
        	if(i!=0 && minimum[i]>maximum)
        	maximum=minimum[i];
        	
        }
        printf("%d",maximum);
    }
    return 0;
}

