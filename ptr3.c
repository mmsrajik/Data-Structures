#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

int main()
{
	int i;
	int *ptr;
	int *temp;
	
	ptr = (int *)malloc(sizeof(int)*SIZE);
	temp = ptr;
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",ptr++);
		
	}
	
	ptr = temp;
	
	for(i=0;i<SIZE;i++)
	{
		printf("\n%d",*ptr++);
	}
	
	return 0;
}
