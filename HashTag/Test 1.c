#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k; 
    scanf("%d %d",&n,&k);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    int currentpos=0,energy=100;
    for(;energy>0;)
        {
        currentpos=(currentpos+k)%n;
        energy-=1;
        printf("\nCurrent position = %d",currentpos);
        printf("\nEnergy = %d",energy);
        if(c[currentpos]==1)
            {
            	energy-=2;
            	printf("\nThunder cloud detected. Hence enerygy = %d",energy);
            }
        if(currentpos==0)
            break;
        printf("\n"); 
		}
    printf("%d",energy);
    return 0;
}

