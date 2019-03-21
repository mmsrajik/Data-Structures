#include <stdio.h>

int main()
{
	int i,j;
	
	for(i=0;i<=3;i++)
	{
		
		if(i==1)
			j=j-1;
		else if(i==2)
			j=j-2;
		else if(i==3)
			break;
		else
			j=1;
			
		for(;j<=(i+3);j++)
		{
			printf(" %d",(j+i));
		
		}
		
		printf("\n");
	}
	
}
