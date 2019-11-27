#include "selectionSort.h"


void insertionSort(int arr[], int n){
    int i;
    int j;
    int key;
    for(i = 1; i< n; i ++){
        key = arr[i]; 
        for(j = i-1; j > 0; j--){

            //move numbers larger than key backwards
            if(key < arr[j]){
                arr[j + 1] = arr[j];
            }else{
                break;
            }
        }
        //move the key to right place
        arr[j + 1] = key;
    }
}

// Another approach using while loop instead of for loop
// from https://www.geeksforgeeks.org/insertion-sort/
// void insertionSort(int arr[], int n)  
// {  
//     int i, key, j;  
//     for (i = 1; i < n; i++) 
//     {  
//         key = arr[i];  
//         j = i - 1;  
  
//         /* Move elements of arr[0..i-1], that are  
//         greater than key, to one position ahead  
//         of their current position */
//         while (j >= 0 && arr[j] > key) 
//         {  
//             arr[j + 1] = arr[j];  
//             j = j - 1;  
//         }  
//         arr[j + 1] = key;  
//     }  
// }  
