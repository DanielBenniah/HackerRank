#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
	int scores_i, alice_i;
    scanf("%d",&n);
    int *scores = malloc(sizeof(int) * n);
    for(scores_i = 0; scores_i < n; scores_i++){
       scanf("%d",&scores[scores_i]);
    }
    int m; 
    scanf("%d",&m);
    int *alice = malloc(sizeof(int) * m);
    for(alice_i = 0; alice_i < m; alice_i++){
       scanf("%d",&alice[alice_i]);
    }
   	int i,j,rank;
   	int* ramp=malloc(sizeof(int)*n);
   	rank=1;
   	for(i=0;i<n-1;i++)
   	if(scores[i]!=scores[i+1])
   	rank+=1;
   	  	ramp[0]=rank+1;
   	for(i=0;i<m;i++)
   	{
   		rank=1;
   		for(j=0;j<n;j++)
   		{
   			if(alice[i]>=scores[j])
   			{
   				ramp[i]=rank;
   				break;
   			}
   			else if(scores[j]!=scores[j+1])
   				rank+=1;
   		}
   		printf("%d\n",ramp[i]);
   	}
    return 0;
}
