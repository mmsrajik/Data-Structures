int display()
{
	int ch = 0;
	printf("\nPress 1 to display odd numbers");
	printf("\nPress 2 to display odd numbers");
	printf("\nPress 3 to Exit program");
	
	
	printf("\nEnter Your Choice: ");
	scanf("%d",&ch);
	return ch;
}

int main()
{
	int *ptr1,*ptr2;
	ptr1 = (int *)malloc(sizeof(int)*100);
	ptr2 = (int *)malloc(sizeof(int)*100);
	storeval(ptr1,ptr2);
		
	return 0;
}

void storeval(int *ptr1,int *ptr2)
{
	static int oddc,evenc;
	int i;
		
	for(i=1,oddc=0,evenc=0;i<=100;i++)
	{
		if((i%2) == 0){
			*(ptr1+evenc)=i; evenc++;}
		else{
			*(ptr2+oddc)=i; oddc++;}
	}

}