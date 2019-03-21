#include <stdio.h>
#include <string.h>
int main()
{
	char name[20]="Bhima";
	char temp;
	int i, pos=2;
	
	printf("\nName = %s",name);
	
	
	for(i=0;i<=strlen(name);i++)
	{
		if(i==pos)
		{
			temp = name[i];
			name[i]='e';
			i++;
		}
		else
		{
			if(i==pos){
			name[i+1]=temp;
			}
			else{
			
			temp = name[i];
			name[i] = name[i];
			}
		}
	}
	name[i]= '\0';
	
	
	
	printf("\nNew Name=%s",name);
	
	
	
	return 0;
}
