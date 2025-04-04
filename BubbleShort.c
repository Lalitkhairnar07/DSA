#include <stdio.h>
#define S 6

int a[S] = {34, 85, 65, 95, 25, 22};

void display()
{
    int i;

    for (i = 0; i < S; i++)
    {
        printf(" %d ", a[i]);
    }
}

void bubbleShort() 
{
    int temp;
    for(int i=0;i<S;i++)
    {
        for(int j=0;j<S-1;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}


int main()
{
    printf("\nArray Before Start");
    display();

    bubbleShort();

    printf("\nArray After Start ");
    display();

    return 0;
}