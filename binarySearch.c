#include <stdio.h>
#define SIZE 5

int arr[] = {10,20,30,40,50};

void binarySearch(int search){

    int min=0,max=SIZE-1,mid;
    int found=0;

    while (min<=max)
    {
        mid = (min+max)/2;
        if(search == arr[mid]){
            found=1;
            break;
        }else if(search > arr[mid]){
            min = mid + 1;
        }else if(search < arr[mid]){
            max = mid - 1;
        } 
    }

    if(found == 1){
        printf("\nFound");
    }else
    {
        printf("\nNot Found");
    }
    

}

int main(){

    binarySearch(45);
    binarySearch(20);
    binarySearch(85);

}