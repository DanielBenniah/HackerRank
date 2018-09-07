#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int Q; 
    scanf("%d",&Q);
    for(int a0 = 0; a0 < Q; a0++){
        int n; 
        scanf("%d",&n);
        char* b = (char *)malloc(512000 * sizeof(char));
        scanf("%s",b);
    	char* b1 = (char *)malloc(512000 * sizeof(char));
    	strcpy(b1,b);
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
        int t=1;
        if(b[n-1]=='_' && n!=1)
        {
        	for(int i=0;i<n;i++)
			{
				if(b[i]=='_')
				{
					t=1;
					break;
				}
				else if(b[i]==b[i-1]||b[i]==b[i+1] && i!=0)
				continue;
				else if(b[i]==b[i+1] && i==0)
				continue;
				else
				{
					t=0;
					break;
				}
			}	
        }
        else if(b[n-1]!='_' && n!=1)
        {
        	for(int i=1;i<n;i++)
			{
				if((b1[i]==b1[i-1]||b1[i]==b1[i+1]) && i!=n-1)
				continue;
				else if((b1[i]==b1[i-1]) && i==n-1)
				{
					t=1;
					break;
				}
				else
				{
					t=0;
					break;
				}
			}	
        }
        else
        t=0;
        if(t==0)
        printf("NO\n");
        else
        printf("YES\n");
	}
    
    return 0;
}

