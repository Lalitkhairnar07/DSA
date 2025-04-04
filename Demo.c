#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int arr[SIZE];

void addElement()
{
    int location;
    int num;

    printf("Enter Number : ");
    scanf("%d", &num);
    printf("Enter Location : ");
    scanf("%d", &location);

    arr[location - 1] = num;
}

void displayElement()
{
    int i;

    for (i = 0; i < SIZE; i++)
    {
        // if (arr[i] != 0)
        printf(" %d", arr[i]);
    }
}

void removeElement()
{
    int location;

    printf("Enter Location : Remove");
    scanf("%d", &location);
    arr[location - 1] = 0;
}

void serchElement()
{
    int i;
    int flag = 0;
    int num;

    printf("Enter You Want Number Serch");
    scanf("%d", &num); 

    for (i = 0; i < SIZE; i++)
    {
        if (arr[i] == num)
        {
            flag = 1;
        }
    }

    if (flag == 1){
        printf("\nFound");
    }
    else{
        printf("\nNot found");
    }
}

int main()
{

    int choice;
    while (1)
    {
        printf("\n1) Add ");
        printf("\n2) Display");
        printf("\n3) Remove");
        printf("\n4) Serch");
        printf("\n0) Exit");
        printf("\nEnter Choice ");

        scanf(" %d", &choice);

        switch (choice)
        {
        case 1:
            addElement();
            break;

        case 2:
            displayElement();
            break;

        case 3:
            removeElement();
            break;

        case 4:
            serchElement();

        case 0:
            exit(0);
            break;
        } // switch
    } // while

    return 0;

} // main