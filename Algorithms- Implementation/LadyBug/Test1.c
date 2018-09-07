#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int check(char* array,int n)
{
	
}
int main(){
    int Q; 
    scanf("%d",&Q);
    for(int a0 = 0; a0 < Q; a0++){
        int n; 
        scanf("%d",&n);
        char* b = (char *)malloc(512000 * sizeof(char));
        scanf("%s",b);
        int* number=malloc(sizeof(int)*26);
        for(int i=0;i<100;i++)
        number[i]=0;
        char* array=malloc(sizeof(int)*n);
        strcpy(array,b);
       for(int i=1;i<n;i++)
        {
        	for(int j=i;j>0;j--)
        	{
        		if(b[j]<b[j-1])
        		{
        			char temp=b[j-1];
        			b[j-1]=b[j];
        			b[j]=temp;
        		}
        	}
        } 
        printf("\nArranged order = %s\n",b);
        int t=1;
        if(b[n-1]!='_')
        {
        	for(int i=1;i<n;i++)
			{
				if(array[i]==array[i-1]||array[i]==array[i+1])
					continue;
				else
				t=0;
			}
        }
        else
        {	
        	printf("\nb[%d-1] = %c",n,b[n-1]);
        	for(int i=1;i<n;i++)
			{
				if(b[i]=='_')
				{
					t=1;
				}
				else if(b[i]==b[i-1]||b[i]==b[i+1])
				continue;
				else
				t=0;
			}	
        }
        if(t==0)
        printf("NO\n");
        else
        printf("YES\n");
    }
    return 0;
}

