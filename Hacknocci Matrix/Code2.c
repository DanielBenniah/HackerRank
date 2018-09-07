#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	printf("Enter a number n:");
	scanf("%d",&n);
	int p[7]={1,0,1,0,0,1,1};
	int i,j;
	int **a = (int **)malloc(n * sizeof(int *));
    for (i=0; i<n; i++)
       a[i] = (int *)malloc(n * sizeof(int));
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		a[i][j]=p[((((i+1)*(j+1))*((i+1)*(j+1)))%7)-1];
	}
	//rotation check;
	int number = 0;
	int **t=(int **)malloc(n* sizeof(int*));
	for(i=0;i<n;i++)
		t[i]=(int*)malloc(n*sizeof(int));
		t=a;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[j][i]!=a[n-1-i][j])
				{
					number+=1;
				}
			}
		}
			printf("\n");
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	printf("\nNumber=%d",number);
	
}
