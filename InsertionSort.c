#include<stdio.h>
#define S 5

int a[S] = {52,12,85,96,78};

void diplay()
{
    int i;
    for(i=0;i<S;i++)
    {
        printf(" %d ",a[i]);
    }
}

void SelectionSort()
{
    int i,j,temp;

    for(i=0;i<S;i++)
    {
        temp=a[i];
        
        for(j=i - 1;j<S;j--) 
        {
            if(a[j] > temp)
            {
                a[j+1] = a[j];
            }
            else {
                break;
            }
        }

        
        a[j+1] = temp;
    }
    

}

int main()
{
    printf("Before Array :: ");
    diplay();

    SelectionSort();

    printf("After Array :: ");
    diplay();

    return 0;
}
