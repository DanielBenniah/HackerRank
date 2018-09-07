#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <conio.h>

int main(){
    int n,j; 
    int k; 
    int a0,q,a_i,i; 
    scanf("%d %d %d",&n,&k,&q);
    int *a = malloc(sizeof(int) * n);
    int *p = malloc(sizeof(int) * n);
    for(a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }  
	p=a; 
    for(i=0;i<k;i++)
    {
    	printf("\nCursor is in Loop1");
    	printf("\nValue of i is %d",i);
        a[0]=p[n-1];
        printf("\na[0] is %d",a[0]);
        for(j=1;j<n;j++)
        {
        a[j]=p[j-1];
        printf("\na[%d] is %d",j,a[j]);
    }
    printf("\n");
    p=a;
    }
        for(a0 = 0; a0 < q; a0++){
        int m; 
        scanf("%d",&m);
        printf("%d\n",a[m]);
    }
    
    return 0;
}
