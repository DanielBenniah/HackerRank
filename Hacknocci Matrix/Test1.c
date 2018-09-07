#include <stdio.h>
#include <conio.h>

void disp(int** temp, int n)
{
	printf("\n");
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",temp[i][j]);
		printf("\n");
	}
}
int main()
{	
	int n;
		int i,j;

	printf("Enter value:");
	scanf("%d",&n);
		int** a = (int **)malloc(n * sizeof(int *));
    for (i=0; i<n; i++)
       a[i] = (int *)malloc(n * sizeof(int));
	
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{	
		a[i][j]=0;
	}
	for(i=0;i<n;i++)
	{
		if((i+1)%2==0)
		for(j=i+1;j<n;j++)
		{
			a[i][j]=1;
			a[j][i]=1;
		}
	}
	a[0][0]=1;
	disp(a,n);
	//Rotation through 90;
	int **t = (int **)malloc(4 * sizeof(int *));
    for (i=0; i<n; i++)
       t[i] = (int *)malloc(4 * sizeof(int));
	
	for(j=0;j<n;j++)
	for(i=0;i<n;i++)
		t[j][i]=a[n-1-i][j];
	
	disp(t,n);
	
	int number = 0;
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	if(t[i][j]!=a[i][j])
	number+=1;
	
	printf("%d\n",number);
}
