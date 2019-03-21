#include <stdio.h>

int main()
{
	int a[3],i;
	int *ptr;
	
	ptr = a;
	
	for(i=0;i<3;i++)
	{
		printf("\nadd = %u\n",ptr);
		scanf("%d",ptr++);
		
	}
	
	ptr = a;
	for(i=0;i<3;i++)
	{
		printf("\n%d",*ptr++);
	}
	
	return 0;
}
