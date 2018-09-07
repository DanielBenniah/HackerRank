#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    int t=strlen(s);
    float f=sqrt(t);
    int i=floor(f);
    int j=ceil(f);
    int k=0;
    int f1=0;
    int times = 0;
    while(k!=0 || times!=1)
    {	
    	times=1;
    	if(f1==i)
    	{
    		printf(" ");
    		f1=0;
		}
    	else
    	{
    		printf("%c",s[k]);
    		k=(k+j)%(t-1);
    		f1+=1;
    	}
    }
    printf("%c",s[t-1]);
    return 0;
}

