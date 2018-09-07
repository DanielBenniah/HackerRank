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
    int *scores = malloc(sizeof(int) * n);
    for(int scores_i = 0; scores_i < n; scores_i++){
       scanf("%d",&scores[scores_i]);
    }
    int m; 
    scanf("%d",&m);
    int *alice = malloc(sizeof(int) * m);
    for(int alice_i = 0; alice_i < m; alice_i++){
       scanf("%d",&alice[alice_i]);
    }
    int *f=malloc(sizeof(int) *m);
    for(int i=0;i<m;i++)
        {
        f[i]=0;
    }
    int *t=malloc(sizeof(int) *(n+1));
int p=0;
int num_assign=0;
int i,j;
i=0;
	for(j=0;j<n;j++)
	{
		if(scores[j]>alice[i])
		{
			t[p]=scores[j];
		}
		else
		{
			t[p]=alice[i];
		}
	p+=1;
	}
	num_assign=1;
	for(j=0;j<n;j++)
	{
		if(t[j]==alice[i])
		{
			f[i]==num_assign;
			break;
		}
		else if(t[j]==t[j+1])
		{
			continue;
		}
		else
		num_assign+=1;
	}

    for(i=0;i<m;i++)
        printf("%d\n",f[i]);
    // your code goes here
    return 0;
}
