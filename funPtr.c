#include <stdio.h>

int mul(int,int);
int addition(int,int);

int main()
{
	int (*fn)();
	fn = mul;
	printf("\n%d",(*fn)(10,20));
	fn = addition;
	printf("\n%d",(*fn)(10,20));
	
}

int mul(int x,int y)
{
	return (x*y);
}

int addition(int x,int y)
{
	return(x+y);
}
