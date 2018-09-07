#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int checkrepeat(int* a,int n)
{
	for(int i=n;i>0;i--)
	{
		for(int j=i-1;j>0;j--)
		if(a[i]==a[j])
		return 1;
	}
	return 0;
}
int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int k,solution=1,t=1,f=0; 
        scanf("%d %d",&n,&k);
 		int* a=malloc(sizeof(int)*(n+1));
		for(int i=1;i<=n;i++)
		{
			f+=1;
			if(t==1)
			{
				printf("\nt = %d",t);
				printf("\nf = %d",f);
				a[i]=i+k;
				printf("\na[%d] = %d",i,a[i]);
				if(a[i]>n)
				{
					a[i]%=n;
				}
			}
			else
			{
				printf("\nt = %d",t);
				printf("\nf = %d",f);
				a[i]=abs(i-k);
				printf("\na[%d] = %d",i,a[i]);
			}
			if(f==k)
			{
				if(t==1)
				{
					t=2;
					f=0;
				}
				else
				{
					t=1;
					f=0;
				}
			}
		}
		if(checkrepeat(a,n)==1)
		solution=0;
      	nexttestcase:
      		printf("\nSolution:\n");
      		if(solution==1)
      		for(int i=1;i<=n;i++)
      		printf("%d ",a[i]);
      		else
      		printf("-1");
      		printf("\n");
    }
    return 0;
}

