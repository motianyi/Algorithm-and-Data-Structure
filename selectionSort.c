#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(int *xp, int *yp);
void selectionSort(int arr[], int n);
void printList(int arr[], int len);

int main(){
    // printf() displays the string inside quotation
    

    int arr[] = {0,2,4,6,7,1,9,8,3,5};

    int len = sizeof(arr)/sizeof(arr[0]);

    //print the unsorted array
    printf("Unsortted Array:");
    printList(arr,len);
    
    //sort the array
    selectionSort(arr,len);
    
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


//swap the value of two pointers
void swap(int *xp, int *yp){  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  

// Selection sort
// Best case O(n^2)
// Average case O(n^2)
// Worst case O(n^2)
// Memory O(1)

void selectionSort(int arr[], int n){
    int i, j, min_idx; 

    //find the minimum for n times
    for (i = 0; i < n-1; i++){ 

        // Find the minimum element in the array 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_idx]) 
            min_idx = j; 
  
        // Swap the minimum element with the first element 
        swap(&arr[min_idx], &arr[i]); 
    } 
}
