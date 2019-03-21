#include <stdio.h>
#include <stdlib.h>

struct ll
{
	int a;
	struct ll *next;	
};

typedef struct ll LinkedL;
int main()
{
	LinkedL *s1,*s2,*s3;
	
	LinkedL *temp;
	
	s1 = (LinkedL *)malloc(sizeof(LinkedL));
	s2 = (LinkedL *)malloc(sizeof(LinkedL));
	s3 = (LinkedL *)malloc(sizeof(LinkedL));
	
	s1->a=10;
	s2->a=20;
	s3->a=30;
	
	s1->next = NULL;
	s2->next = NULL;
	s3->next = NULL;
	
	s1->next = s2;
	s2->next = s3;
	
	printf("\ns1->a=%d\t s2->a=%d\t s3->a=%d",s1->a,s2->a,s3->a);
	printf("\naddress    \t %u\t%u\t%u",s1,s2,s3);
	printf("\naddress ptr\t %u\t%u\t%u",s1->next ,s2->next,s3->next);
	
	temp=s1;
	printf("\nAddress of temp = %u and s1 = %u",temp,s1);
	/*print_list(temp);*/
	
	printf("\na = %d",temp->a);
	/*
	printf("\n address = %u %u",s2, s1->next);
	printf("\n\n temp address = %u %u\n\n",temp, temp->next);
	*/
	temp = temp->next ;
	printf("\na = %d",temp->a);
	temp = temp->next ;
	printf("\na = %d",temp->a);
	
}

void print_list(LinkedL * head) {
    LinkedL * current = head;

    while (current != NULL) {
        printf("\nMyval = %d\n", current->a);
        current = current->next;
    }
}
