#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    int minimum=100000;
    for(int i=0;i<n;i++)
        if(c[i]<minimum)
        minumum=c[i];
    for(int i=0;i<n;i++)
        if(c[i]==minimum)
        c[i]*=2;
    
    return 0;
}
	
