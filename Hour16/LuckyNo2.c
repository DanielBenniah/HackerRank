#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int q; 
    scanf("%d",&q);
    for(int a0 = 0; a0 < q; a0++){
        long n; 
        scanf("%ld",&n);
        
    long int k = (long)(n%7);
    printf("\nk after modulus with 7 = %d",k);
    k = (long)(k%4);
    printf("\nk after modulus with 4 = %d",k);
        long int f = (long)(n%4);
    printf("\nf after modulus with 4 = %d",f);
    f = (long)(f%7);
    printf("\nf after modulus with 7 = %d",k);
    if(k==0 || f==0)
        printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

