#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "selectionSort.h"

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
