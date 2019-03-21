/*Program to implement a stack using Array*/

#include <stdio.h>
#include <conio.h>
#define MAX 50
void insert();
void delet();
void display();
int stack[MAX], top=-1, element;
void main()
{
    int ch;
    do
    {
        printf("\n\n\n\n 1. Insert\n 2. Delete\n 3. Display\n 4. Exit\n");
        printf("\n Enter Your Choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
            insert();
            break;
            case 2:
            delet();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            default:
            printf("\n\n Invalid entry. Please try again...\n");
        }
    }
    while(ch!=4);
    getch();
}
void insert()
{
    if(top == MAX-1)
        printf("\n\n Stack is Full.");
    else
    {
        printf("\n\n Enter Element: ");
        scanf("%d", &element);
        top++;
        stack[top] = element;
        printf("\n\n Element Inserted = %d", element);
    }
}
void delet()
{
    if(top == -1)
        printf("\n\n Stack is Empty.");
    else
    {
        element = stack[top];
        top--;
        printf("\n\n Element Deleted = %d", element);
    }
}
void display()
{
    int i;
    if(top == -1)
    printf("\n\n Stack is Empty.");
    else
    {
        for(i=top; i>=0; i--)
            printf("\n%d", stack[i]);
    }
}