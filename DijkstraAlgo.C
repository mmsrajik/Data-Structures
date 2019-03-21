#include <stdio.h>
void main()
{
	int cost[10][10],path[10][10],n,v,i,j
	
	print("\nEnter no of nodes");
	scanf("%d",&n);
	printf("\nEnter the cost matrix\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
		}
	}
	printf("\nEnter the node to visit");
	scanf("%d",&y);
	printf("\nEnter the path for the selected node");
	scanf("%d",&p);
	printf("\nEnter the path matrix");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=p;j++)
		{
			scanf("%d",path[i][j]);
		}
	}
	for(i=1i<=p;i++)
	{
		distance[i]=0;
		row=1
		for(j=1;j<=n;j++)
		{
			if(row!=v)
			col = path[i][j+1];
			distance[i] = distance[]+cost[row][col];
		}
		row = col;
	}
}
	