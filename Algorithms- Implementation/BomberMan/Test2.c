#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int R,C;
    long int N;
    scanf("%d %d %ld",&R,&C,&N);
    char a[200][200];
    for(int i=0;i<R;i++)
        scanf("%s",a[i]);
    long int k=4;
    
        long int time = N;
        
		if(time==1)
		{
			for(int i=0;i<R;i++)
			{
				printf("%s\n",a[i]);
			}
		}
		
		else if(time%2==0)
		{
			for(int i=0;i<R;i++)
				for(int j=0;j<C;j++)
						if(a[i][j]=='.')
						a[i][j]='O';
			for(int i=0;i<R;i++)
			{
				printf("%s\n",a[i]);
			}
		}	
		if(N>2)
		{
		
        time = (long)(N%4);
        
		if(time==1)
		{
			for(int i=0;i<R;i++)
				for(int j=0;j<C;j++)
					if(a[i][j]=='O')
						a[i][j]='M';
			
			for(int i=0;i<R;i++)
				for(int j=0;j<C;j++)
					{
						if(a[i][j]=='.')
							a[i][j]='O';
						else if(a[i][j]=='M')
							a[i][j]='C';
					}
    		
    		for(int i=0;i<R;i++)
    		for(int j=0;j<C;j++)
    		{
    			if(a[i][j]=='O')
    			{
    				if(a[i+1][j]=='C'||a[i-1][j]=='C'||a[i][j+1]=='C'||a[i][j-1]=='C')
    				a[i][j]='.';
    			}
			}	
				for(int i=0;i<R;i++)
    			for(int j=0;j<C;j++)
    				{
    					if(a[i][j]=='C')
    					a[i][j]='.';
    					else if(a[i][j]=='O')
    					a[i][j]='M';
    				}
    				
    			for(int i=0;i<R;i++)
				for(int j=0;j<C;j++)
					{
						if(a[i][j]=='.')
							a[i][j]='O';
						else if(a[i][j]=='M')
							a[i][j]='C';
					}
					
				for(int i=0;i<R;i++)
    			for(int j=0;j<C;j++)
    			{
    				if(a[i][j]=='O')
    				{
    					if(a[i+1][j]=='C'||a[i-1][j]=='C'||a[i][j+1]=='C'||a[i][j-1]=='C')
    					a[i][j]='.';
    				}
				}
				
				for(int i=0;i<R;i++)
    			for(int j=0;j<C;j++)
    				{
    					if(a[i][j]=='C')
    					a[i][j]='.';
					}
    		
			for(int i=0;i<R;i++)
			{
				printf("%s\n",a[i]);
			}
		
		}
		else if(time==3)
		{
			for(int i=0;i<R;i++)
				for(int j=0;j<C;j++)
					if(a[i][j]=='O')
						a[i][j]='M';
			
			for(int i=0;i<R;i++)
				for(int j=0;j<C;j++)
					{
						if(a[i][j]=='.')
							a[i][j]='O';
						else if(a[i][j]=='M')
							a[i][j]='C';
					}
    		
    		for(int i=0;i<R;i++)
    		for(int j=0;j<C;j++)
    		{
    			if(a[i][j]=='O')
    			{
    				if(a[i+1][j]=='C'||a[i-1][j]=='C'||a[i][j+1]=='C'||a[i][j-1]=='C')
    				a[i][j]='.';
    			}
			}	
				for(int i=0;i<R;i++)
    			for(int j=0;j<C;j++)
    				if(a[i][j]=='C')
    					a[i][j]='.';			
    		
			for(int i=0;i<R;i++)
			{
				printf("%s\n",a[i]);
			}
		}
    	
		}
    return 0;
}

