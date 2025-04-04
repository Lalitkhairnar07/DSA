#include<stdio.h>
#define S 5
 
int q[S];
int  front=-1;
int rear=-1;

void enQueue(int num){
    
    if(rear == S-1){
        
        printf("\nQueue Is Full ");

    }
    else{
        rear++;
        q[rear] = num;
        if(front == -1){
            front=0;
        }
    }
}

void deQueue(){
    if (front == -1)
    {
        
        printf("\nQueue is Empty");
    
    }else{

        printf("\n%d Removed ",q[front]);
        
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }else{
            front++;
        }
    }
    
}


void display(){
    int i;
    for(i=front;i<=rear;i++){
        printf("%d",q[i]);
    }
}

int main(){

    int choice;
    int num;
    
    while (1)
    {
        printf("\n1) EnQueue");
        printf("\n2) DeQueue");
        printf("\n3) Diplay");
        printf("\n4) Exit ");
        printf("\nEnter The Choice");
        scanf("%d",&choice);

        switch (choice){
            case 1:
                   printf("Enter the Number : ");
                   scanf("%d",&num); 
                   enQueue(num);
                   break;

            case 2:
                    deQueue();
                break;

            case 3:
                    display();
                    break;    
                    
            case 4: 
                    return 0; 
        }
    }
    

}