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
    int rows=floor(f);
    int columns=ceil(f);
    while(rows*columns<t)
    rows+=1;
    int k=0;
    int f1=0;
    char assignvalue;
    int times = 0;
    int** a=(int**)malloc(sizeof(int*)*rows);
    for(int i=0;i<rows;i++)
    	a[i]=(int*)malloc((sizeof(int)*columns));
    for(int i=0;i<rows;i++)
    for(int j=0;j<columns;j++)
    {
    	if(f1>=t)
    	assignvalue = '.';
    	else
    	assignvalue=s[f1];
    	a[i][j]=assignvalue;
    	f1+=1;
    }
    for(int j=0;j<columns;j++)
    {
    	for(int i=0;i<rows;i++)
    	{
    		if(a[i][j]=='.')
    		continue;
    		printf("%c",a[i][j]);
    	}
    	printf(" ");
    }
    return 0;
}

