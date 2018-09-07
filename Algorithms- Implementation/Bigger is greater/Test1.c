#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int a_0=0;a_0<t;a_0++)
        {
        char* s = (char *)malloc(10240 * sizeof(char));
        char* s1 = (char *)malloc(10240 * sizeof(char));
        scanf("%s",s);
        strcpy(s1,s);
        int k;
        int t=strlen(s);
        for(int i=t-1;i>0;)
        {
        	for(int j=i-1;j>=0;j--)
        	{
        		if(s[i]>s[j])
        		{
        			char temp=s[i];
        			s[i]=s[j];
        			s[j]=temp;
        			k=j+1;
        			goto ArrangeAscending;
        		}
        		else
        		{
        			i=j;
        			break;
        		}
        	}
        }
        ArrangeAscending:
      	for(int i=k+1;i<t;i++)
		{
			for(int j=i;j>k;j--)
			{
				if(s[j]<s[j-1])
				{
					char temp=s[j];
					s[j]=s[j-1];
					s[j-1]=temp;
				}
			}
		}        
        if(strcmp(s1,s)==0)
            printf("no answer\n");
        else
            printf("%s\n",s);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

