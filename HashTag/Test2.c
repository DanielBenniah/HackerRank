#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    for(int i=1;i<n;i++)
        for(int j=i;j>0;j--)
        {
        	if(c[j]<c[j-1])
            {
            	int temp=c[j];
            	c[j]=c[j-1];
            	c[j-1]=temp;
        	}
   		}
   
    int pairs=0;
    for(int i=0;i<n;i++)
       	if(c[i]==c[i+1])
        {
       		i+=1;
        	pairs+=1;
        }
    printf("%d",pairs);
    return 0;
}

