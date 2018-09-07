#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int checkifsorted(long int* a,long int n)
    {

        for(long int i=0;i<n-1;i++)
        if(a[i+1]<a[i])
        return 0;
        return 1;
    
}
int main() {
    long int n;
    scanf("%ld",&n);
    long int* a=malloc(sizeof(long int)*n);
    for(long int i=0;i<n;i++)
        {
        scanf("%ld",&a[i]);
    }
    int method=0;
    if(checkifsorted(a,n)==1)
        {
        printf("yes\n");
        return 0;
    }
    else
        {
        int pivot1,pivot2;
        printf("\nPivot1 check");
        for(int i=0;i<n-1;i++)
            {
            	printf("\ni = %d",i);
                if(a[i]>a[i-1] && i!=0 && a[i]>a[i+1])
                    {
                       pivot1=i;
                       printf("\npivot 1 = %d",pivot1);
                        break;
                    }
                    else if(a[i]>a[i+1] && i==0)
                    {
                       pivot1=i;
                       printf("\npivot 1 = %d",pivot1);
                        break;
                    }
            }
        printf("\npivot2 check");
        for(int i=pivot1+1;i<n;i++)
            {
            	printf("\ni = %d",i);
                if(a[i]<a[i-1] && a[i]<a[i+1] && i!=n-1 && a[i+1]>a[pivot1])
                    {
                    	pivot2=i;
                    	printf("\npivot 2 = %d",pivot2);
                    	break;
                    }
                else if(a[i]<a[i-1] && i==n-1)
                    {
                    	pivot2=i;
                    	break;
                	}
            }
        int temp=a[pivot1];
        a[pivot1]=a[pivot2];
        a[pivot2]=temp;
        if(checkifsorted(a,n)==1)
        {
        printf("yes\n");
        printf("swap %d %d",pivot1+1,pivot2+1);
        return 0;
        }
        else
            {
            	int temp=a[pivot1];
        		a[pivot1]=a[pivot2];
        		a[pivot2]=temp;
         		for(int i=0;i<=(pivot2-pivot1)/2;i++)
         		{
         			int temp=a[pivot1+i];
         			a[pivot1+i]=a[pivot2-i];
         			a[pivot2-i]=temp;
         		}
         		printf("\nArray after reverse: ");
         		for(int i=0;i<n;i++)
         		printf("%d ",a[i]);
        		if(checkifsorted(a,n)==1)
        		{
        			printf("yes\n");
        			printf("reverse %d %d",pivot1+1,pivot2+1);
        			return 0;
        		}
				else
				{
					printf("no\n");
					return 0;
				}	
        	}   
        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

