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
    scanf("%d",&n);
    int p; 
    scanf("%d",&p);
    int i=1,numberofpages=0;
    if(p>n/2)
    {	
    	i=n;
    	if(n%2==1)
    	{
    		do
    		{	
    			if(i==p||i-1==p)
    			break;
    			else
    			{
    				numberofpages+=1;
    				i-=2;
    			}
    		}while(i>n/2);
    	}
    	else
    	{
    		do
			{
	  			if(i==p||i+1==p)
    			break;
    			else
    			{
    				numberofpages+=1;
    				i-=2;
    			}
    		}while(i>n/2);
    	}
    }
    else
    {	
    	i=1;
    	do
    	{
    		if(i==p||i-1==p)
    		break;
    		else
    		{
    			numberofpages+=1;
    			i+=2;
    		}
    	}while(p<=n/2);
    }
    printf("%d",numberofpages);
    // your code goes here
    return 0;
}
