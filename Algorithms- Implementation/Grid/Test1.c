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
    int a_0=0;
    while(a_0 < t)
	{	
		int f=0;
        int R,C; 
        scanf("%d %d",&R,&C);
        char* G[R];
        for(int G_i = 0; G_i < R; G_i++){
           G[G_i] = (char *)malloc(1024 * sizeof(char));
           scanf("%s",G[G_i]);
        }
        int r,c; 
        scanf("%d %d",&r,&c);
        char* P[r];
        for(int P_i = 0; P_i < r; P_i++){
           P[P_i] = (char *)malloc(1024 * sizeof(char));
           scanf("%s",P[P_i]);
        }
       int i=0,j=0;
        while(i<R-r+1)
            {
            	j=0;
            while(j<C-c+1)
                {
                for(int i1=0;i1<r;i1++)
                    {
                    for(int j1=0;j1<c;j1++)
                        {
                        	if(G[i1+i][j1+j]!=P[i1][j1])
                                goto next;
                            else if(i1 == r-1 && j1 == c-1 && G[i1+i][j1+j]==P[i1][j1])
                            {
                			    f=1;
                			    goto here;
                			}           
                        }
                    }
				  next:
				  j+=1;                
                }
            i+=1;
			}
			here:
				if(f==1)
				printf("YES\n");
				else
				printf("NO\n");
		a_0+=1;  
    }
    return 0;
}

