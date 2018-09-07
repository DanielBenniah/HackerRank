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
        long int k;
        if(n%7==0)
        k=n/7;
        else
        k=n/7+1;
        int t=0;
            for(int j=k;j>=0;j--)
            {
                if(((long)(n-(7*j)-(4*(k-j))))==0)
                {
					t=1;
                 	goto next;
				}
                else
                    t=0;
        	}
        if(n%4==0)
        k=n/4;
        else
        k=n/4+1;
        for(int j=k;j>=0;j--)
            {
                if(((long)(n-(7*j)-(4*(k-j))))==0)
                {
					t=1;
                 	goto next;
				}
                else
                    t=0;
        	}
        next:
        if(t==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

