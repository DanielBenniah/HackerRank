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
    for(int i=1;i<m;i++)
    for(int j=i;j>0;j--)
    {
    	if(c[j]<c[j-1])
    	{
    		int temp=c[j];
    		c[j]=c[j-1];
    		c[j-1]=temp;
    	}
    }
    if(n==m)
        printf("0\n");
    else
      {
        int i=0,j=0,maximum=0;
		int minimum=1000000;
        for(int i=0;i<n;i++)
        {
        	minimum=100000;
        	for(int j=0;j<m;j++)
        	{
        		int t=abs(c[j]-i);
        		if(t<minimum)
        		{
        			minimum=t;
        		}
        	}
        	if(minimum>maximum)
        	maximum=minimum;
        	
        }
        printf("%d",maximum);
    }
    return 0;
}

