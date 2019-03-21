#include <stdio.h>






struct studinfo
{
	int rno;
	char name[20];	
};

int main()
{
	
	struct studinfo s[3];
	struct studinfo *p;
	int i;
	
	
	p = s;
	
	for(i=0;i<3;i++){
	fflush(stdin);
	printf("\nEnter the Name of Student %d : ",(i+1));
	scanf("%s",s[i].name);
	printf("\nEnter the Rno of Student %d : ",(i+1));
	scanf("%d",&s[i].rno);
	}
	
	printf("\n|%20s\t| Rno|\n","Name");
	
	for(i=0;i<3;i++,p++){
	printf("\n|%20s\t|%d|\n",p->name,p->rno );
	
	}
	return 0;
}

