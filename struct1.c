#include <stdio.h>






struct studinfo
{
	int rno;
	char name[20];	
};

int main()
{
	struct studinfo s1,s2,s3;
	
	/* Start ==== Student 1 record */
	printf("\nEnter the Name of Student 1 : ");
	scanf("%s",s1.name);
	printf("\nEnter the Rno of Student 1 : ");
	scanf("%d",&s1.rno);
	/* End ==== Student 1 record */
	
	/* Start ==== Student 2 record */
	printf("\nEnter the Name of Student 2 : ");
	scanf("%s",s2.name);
	printf("\nEnter the Rno of Student 2 : ");
	scanf("%d",&s2.rno);
	/* End ==== Student 2 record */
	
	/* Start ==== Student 3 record */
	printf("\nEnter the Name of Student 3 : ");
	scanf("%s",s3.name);
	printf("\nEnter the Rno of Student 3 : ");
	scanf("%d",&s3.rno);
	/* End ==== Student 3 record */
	
	
	printf("\n|Name\t| Rno|\n");
	printf("\n|%20s\t| %d|\n",s1.name,s1.rno);
	printf("\n|%20s\t| %d|\n",s2.name,s2.rno);
	printf("\n|%s\t| %d|\n",s3.name,s3.rno);
	
	return 0;
}

