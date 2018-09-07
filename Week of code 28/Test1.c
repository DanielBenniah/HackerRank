#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int m; 
        int* from=malloc(sizeof(int)*m);
        int* to=malloc(sizeof(int)*m);
        int* visited=malloc(sizeof(int)*m);
        for(int i=0;i<m;i++)
        visited[i]=0;
        scanf("%d %d",&n,&m);
        for(int a1 = 0; a1 < m; a1++){
            scanf("%d %d",&from[a1],&to[a1]);
            if(from[a1]>to[a1])
            swap(&from[a1],to[a1]);
        	}	
        	for(int i=1;i<m;i++)
        	{
        		for(int j=i;j>0;j--)
        		{
        			if(from[j]<from[j-1])
        			{
        				int temp=from[j];
        				from[j]=from[j-1];
        				from[j-1]=temp;
        				temp=to[j];
        				to[j]=to[j-1];
        				to[j-1]=temp;
        			}
        		}
        	}
        	visited[from[0]]=1;
        	int numberofpeople = 1;
        	
    }
    return 0;
}

