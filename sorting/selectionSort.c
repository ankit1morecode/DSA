#include<stdio.h>

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){   // O(1)*n
        int minIdx = i;     // index of minimum element in unsorted array
        for(int j=i+1; j<n; j++){   //O(n)*n = O(n^2)
            if(arr[j]<arr[minIdx]){    // finding minimum element in unsorted array
                minIdx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIdx];    // swap with minimum element
        arr[minIdx] = temp;
    }
}

int main(){
    int n = 5;
    int arr[] = {64, 25, 12, 22, 11};
    selectionSort(arr, n);
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
 return 0;
}