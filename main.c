#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "selectionSort.h"
#include "insertionSort.h"

void printList(int arr[], int len);

int main(){
    // printf() displays the string inside quotation
    

    int arr[] = {0,2,4,6,7,1,9,8,3,5};

    int len = sizeof(arr)/sizeof(arr[0]);

    //print the unsorted array
    printf("Unsortted Array:");
    printList(arr,len);
    
    //sort the array
    // selectionSort(arr,len);
    insertionSort(arr,len);
    
    //print the sorted array
    printf("Sortted Array:");
    printList(arr,len);
    
    return 0;
}

//swap the value of two pointers
void printList(int arr[], int len){  
    
    int i;
    printf("[");
    for(i = 0; i < len; i++){
        printf("%d",arr[i]);

        //print the comma
        if(i != len - 1){
            printf(", ");
        }else{
            printf("]\n");
        }
    }
}  

