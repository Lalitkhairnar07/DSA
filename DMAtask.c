// #include <stdio.h>
// #include <stdlib.h>

// int *p;

// void getData()
// {
//     p = calloc(5,sizeof(int));
//     for (int i = 0; i < 5; i++)
//     {
//         printf("\nEnter The Number : ");
//         scanf("%d",&p[i]);
//     }
// }

// void printData()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         printf("\np = %d", p[i]);
//     }
// }

// void oddsum() {
//     int i,sum = 0;
//     for (int i = 0; i < 5; i++) {
//         if (p[i] % 2 != 0) {
//             sum += p[i];
//         }
//     }
//     printf("\nSum of odd numbers: %d\n", sum);
// }

// int main()
// {
//     getData();
//     printData();

//     oddsum();

//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>

void getData(int *p)
{
    
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter The Number : ");
        scanf("%d",&p[i]);
    }
}

void printData(int *p)
{
    
    for (int i = 0; i < 5; i++)
    {
        printf("\np = %d", p[i]);
    }
}

void oddsum(int *p) {
    int i,sum = 0;
    
    for (i = 0; i < 5; i++) {
        if (p[i] % 2 != 0) {
            sum += p[i];
        }
    }
    printf("\nSum of odd numbers: %d\n", sum);
}

int main()
{
    int *p;

    p = calloc(5,sizeof(int));

    getData(p);
    printData(p);

    oddsum(p);

    return 0;
}