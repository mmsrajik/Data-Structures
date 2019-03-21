#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main()
{
	char *name;
	int i;
	
	name = (char *)malloc(sizeof(char)*SIZE);
	printf("\nEnter your Name: ");
	scanf("%s",name);
	
	printf("\nYour Name is %d\n",strlen(name));
	for(i=0;i<=strlen(name);i++)
	{
		printf("\n%c",name[i]);
	}

	return 0;	
} 

