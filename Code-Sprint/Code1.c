#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int alice_i,scores_i,n,i=0,j; 
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
    int *f=malloc(sizeof(int) *m);
    int *t=malloc(sizeof(int) *(n+1));
	int p=0;
	int num_assign=0;
	int tp=0,k=0;
for(i=0;i<m;i++)
{	
	tp=0;
	p=0;
	for(j=0;j<n+1;j++)
	{
		if(scores[j]>=alice[i]&&j<n)
		{
			t[p]=scores[j];
			tp+=1;
		}
		else
		{
			t[p]=alice[i];
			tp+=1;
			break;
		}
		p+=1;
	}
	num_assign=1;
	for(j=0;j<tp;j++)
	{
		if(t[j]==alice[i])
		{
			f[i]=num_assign;
			break;
		}
		else if(t[j]==t[j+1])
		{
			continue;
		}
		else
		{
			num_assign+=1;
		}
	}
}
for(i=0;i<m;i++)
printf("%d\n",f[i]);
    return 0;
}
