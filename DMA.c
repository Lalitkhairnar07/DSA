#include<stdio.h>
#include<stdlib.h>

int main(){

    int *p;
    int *a;

    p = malloc(sizeof(int));
    a = calloc(5,sizeof(int));

    printf("\nEnter The Number : ");
    scanf("%d",p);
    
    printf("p = %d",*p);
    free(p);

    for (int i = 1; i < 5; i++)
    {
    
        printf("\nEnter The Number : ");
        scanf("%d",(a+i));
    
        printf("a = %d",*(a+i));
    
    }
    
    free(a);

    return 0;

}