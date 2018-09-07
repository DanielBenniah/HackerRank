#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int k,t=1; 
        scanf("%d %d",&n,&k);
        int* a=malloc(sizeof(int)*(n+1));
        for(int i=1;i<=n;i++)
        {
        	if(i-k>0)
        	{
        		a[i]=abs(i-k);
        	}
        	else if(i+k<=n)
        	{
        		a[i]=abs(i+k);
        	}
        }
        for(int i=1;i<n;i++)
        {
        	for(int j=i+1;j<=n;j++)
        	{
        		if(a[i]==a[j])
        		{
        			a[j]+=(2*k);
        			if(a[j]>n)
        			a[j]%=n;
        			break;
        		}
        	}
        }
        for(int i=1;i<n;i++)
        {
        	for(int j=i+1;j<=n;j++)
        	{
        		if(a[i]==a[j] || a[i]==0)
        		{
        			t=0;
        			goto nexttestcase;
        		}
        	}
        }
        nexttestcase:
        if(t==1)
        for(int i=1;i<=n;i++)
        printf("%d ",a[i]);
        else
        printf("-1");
        printf("\n");
    }
    return 0;
}

