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
    int p,a_i,j,temp,i,f; 
    scanf("%d %d",&n,&p);
    int *a = malloc(sizeof(int) * n);
    for(a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    int *k = malloc(sizeof(int) * n);
    long int sum=0;
    for(i=1;i<n;i++)
    {
    	j=i;
		while(j>0 && a[j]<a[j-1])
    	{
    		temp=a[j];
    		a[j]=a[j-1];
    		a[j-1]=temp;
    		j--;
    	}
	}
    for(i=0;i<n;i++)
    {	
    	if(a[i]%p==0)
    	{
    		k[i]=a[i]/p;
    	}
    	else
    	{
    	  	k[i]=(a[i]/p)+1;
    	}
    	if(k[i]<=k[i-1]&&i>0)
    	{
    		k[i]=(k[i-1]+1);
    	}
    	sum+=k[i];
    }
    printf("%d",sum);
    // your code goes here
    return 0;
}

