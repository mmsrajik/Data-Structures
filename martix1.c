#include <stdio.h>

int main()
{
	int i,j,mat[10][10];
	
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
		scanf("%d",&mat[i][j]);
		
	
	for(i=0;i<2;i++){
	
	for(j=0;j<2;j++)
		printf(" %d",mat[i][j]);
	printf("\n");
	}
	
	for(i=0;i<2;i++){
	
	for(j=0;j<2;j++)
		printf(" %u",&mat[i][j]);
	printf("\n");
	}
}
