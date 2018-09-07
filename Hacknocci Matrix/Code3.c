#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <conio.h>

int main(){
    int n,q,a0,i,j,f; 
    scanf("%d %d",&n,&q);
    long int fup;
    //long int* a=(long int*)malloc(sizeof(long int)*(n*n));
	int p[7]={1,0,1,0,0,1,1};
	long int **a = (long int **)malloc(n * sizeof(long int *));
    for (i=0; i<n; i++)
       a[i] = (int *)malloc(n * sizeof(int));
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		fup=((i+1)*(j+1));
		fup=fup*fup;
		fup-=1;
		fup=fup%7;
		a[i][j]=p[fup];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	int* number=(int*)malloc(sizeof(int)*q);	
    for(a0 = 0; a0 < q; a0++)
	{
		number[a0]=0;
        int angle; 
        scanf("%d",&angle);
		int f;
		if(angle/90==1)
		{
			for(j=0;j<n;j++)
			{
				for(i=0;i<n;i++)
				{
					if(a[j][i]!=a[n-1-i][j])
					{
						number[a0]+=1;
					}
				}
			}
		}
		else if(angle/90==2)
		{
			for(j=0;j<n;j++)
			for(i=0;i<n;i++)
			if(a[i][j]!=a[n-1-i][n-1-j])
			number[a0]+=1;
		}
		else if(angle/90==3)
		{
			for(j=0;j<n;j++)
			for(i=0;i<n;i++)
			if(a[i][j]!=a[j][n-1-i])
			number[a0]+=1;
		}
		printf("%d\n",number[a0]);
	}
	
    return 0;
	}


