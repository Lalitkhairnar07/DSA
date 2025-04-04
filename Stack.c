#include<stdio.h>

#define SIZE 5
int arr[SIZE];

int top=-1;
int i;
int no;
int stack[SIZE];

void push()
{
    if(top == SIZE -1)
    {
        printf("\n Stack is full");
    }
    else
    {
        printf("enter the number");
        scanf("%d",&no);
        top++;
        stack[top]=no;
    }
}
void pop()
{
    if(top == -1)
    {
        printf("stack is empty");
    }
    else
    {
         printf("\n remove top element: %d", stack[top]);
        top--; 
    }
}
void display()
{
    if(top != -1)
    {
            for (i = top; i >= 0; i--)
            {
                printf(" %d", stack[i]);
            }
    }
    else
    {
        printf("stack is empty");
    }        
}

void peek()
{
    printf("\n top element: %d", stack[top]);
}

void peep()
{
   int loaction;
   int index;
   
   printf("Enter The Loaction : ");
   scanf("%d",&loaction);

   index = top - loaction + 1;
   printf("\n %d" , stack[index]);
}

int main()
{
     int choice;

    while (1)
    {
        printf("\n1 for push");
        printf("\n2 for pop");
        printf("\n3 for display");
        printf("\n4 for Peek");
        printf("\n5 for peep");
        printf("\n0 For Exit");
        printf("\nEnter your choice");

        scanf("%d", &choice); 

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            peep();
            break;
        case 0:
            exit(0);
        default:
            break;
        } 
    } 
    return 0;
}