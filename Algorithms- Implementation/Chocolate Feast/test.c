#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int c; 
        int m; 
        scanf("%d %d %d",&n,&c,&m);
        int number=0;
        int k=n/c;
        number+=k;
        int k1=0,tk,f=0;
        do
            {
            	tk=(((k)+(k1%m))/m);
            	if(f!=0 && k1 < m)
            	break;
            	number+= tk ;
            	f=2;
            	k1=k;
            	k=tk;
        }while((k+(k1%m))/m > 0);
    printf("%d\n",number);
    }
    
    return 0;
}

