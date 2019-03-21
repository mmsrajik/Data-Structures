#include <stdio.h>
#include <stdlib.h>

struct stdinfo
{
	int rno;
	char name[20];
		
};

int main()
{
	struct stdinfo *s,*temp;
	int i;

	s = (struct stdinfo *)malloc(sizeof(struct stdinfo)*3);
	temp = s;

	printf("\nEnter the Student's Data\n");
	for(i=0;i<3;i++,s++)
	{
		printf("\nStudent's %d Name:",(i+1));
		scanf("%s",s->name);
		printf("\nStudent's %d RollNo:",(i+1));
		scanf("%d",&s->rno);

	}
	s = temp;
	printf("\nThe Student's Data are\n");
	for(i=0;i<3;i++,s++)
	{
		printf("\nStudent's %d Name:",(i+1));
		printf("%s",s->name);
		printf("\nStudent's %d RollNo:",(i+1));
		printf("%d",s->rno);

	}
	return 0;
}
