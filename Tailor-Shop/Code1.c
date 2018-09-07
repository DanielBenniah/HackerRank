#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <conio.h>

int chkrepeat(int,int*,int);
int main(){
    int n; 
    int p,a_i; 
    scanf("%d %d",&n,&p);
    int *a = malloc(sizeof(int) * n);
    for(a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    int *k = malloc(sizeof(int) * n);
    int i,f,
	long int sum=0;
    for(i=0;i<n;i++)
    k[i]=0;
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
    	again:
    		if(chkrepeat(f,k,n)==0)
    			{	
    				sum+=f;
    				k[i]=f;
    			}
    		else
    		{
    			f+=1;
    			goto again;
    		}
    }
    printf("%d",sum);
    // your code goes here
    return 0;
}
int chkrepeat(int f,int* k,int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		if(k[i]==f)
		return 1;
	}
	return 0;
}
