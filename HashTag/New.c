#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int m; 
    scanf("%d %d",&n,&m);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    int *b = malloc(sizeof(int) * m);
    for(int b_i = 0; b_i < m; b_i++){
       scanf("%d",&b[b_i]);
    }
    for(int i=1;i<n;i++)
        {
        for(int j=i;j<n-1;j++)
            {
            if(a[j]<a[j-1])
                {
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
            if(b[j]<b[j-1])
                {
                int temp=b[j];
                b[j]=b[j-1];
                b[j-1]=temp;
            }
        }
    }
    int t_i=0,t_j=0,t=0;
    for(int f=a[n-1];f<b[0];f++)
        {
        t_i=0; t_j=0;
        for(int i=0;i<n;i++)
            if(f%a[i]==0)
            {
            t_i+=1;
            for(int j=0;j<n;j++)
                if(b[j]%f==0)
                {
                t_j+=1;
            }
        }
        if(t_i==n && t_j==m)
            t+=1;
    }
        printf("%d ",t);
    return 0;
}

