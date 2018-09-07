#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <conio.h>

int main(){
    int n; 
    int p,a_i,j; 
    scanf("%d %d",&n,&p);
    int *a = malloc(sizeof(int) * n);
    for(a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    int *k = malloc(sizeof(int) * n);
    int i,f;
    long int sum=0;
    for(i=0;i<n;i++)
    {	
    	if(a[i]%p==0)
    	{
    		f=a[i]/p;
    	}
    	else
    	{
    	  	f=(a[i]/p)+1;
    	}
    	k[i]=f;
    	for(j=0;j<i;j++)
		{
			if(k[i]==k[j])
			{
				k[i]+=1;
				j=0;
			}
		}
		sum+=k[i];
    }
    printf("%d",sum);
    // your code goes here
    return 0;
}

