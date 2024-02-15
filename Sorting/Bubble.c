#include <stdio.h>
#include <stdlib.h>

void printArray(int *A, int N) {
  for (int i = 0; i < N; i++) {
    printf("%d\n", A[i]);
  }
}

//Adaptive
void BubbleSort(int *A, int n) {
  int isSorted;
  for (int i = 0; i < n - 1; i++) { // Number of pass
    printf("Number of Pass -:  %d\n", i + 1);
    isSorted = 1;
    for (int j = 0; j < n - 1 - i; j++)
      if (A[j] > A[j + 1]) {
        int temp = A[j];
        A[j] = A[j + 1];
        A[j + 1] = temp;
        isSorted = 0;
      }
    if (isSorted) {
      return;
    }
  }
}

//better then bubble
void insertionSort (int *A  ,  int  n){
    int key ;
    int j;
    for(int i = 1 ;  i < n-1 ;  i ++){
        key  = A[i] ; // element 45
        j =  i -1;
        while(j >= 0 && A[j] > key){
            A[j+1]  =A[j]; 
            j--;
        }
        A[j+1] = key;
    }
}

//Selection Sort
void selectionSort(int *A ,  int n){
    //! not a stable sorting algo 
    //! selection sort is not adpative
    //* minimum number of sort
    int min ;
    for(int i =  0 ;  i <  n-1 ;   i++){
        min  =  i ; 
        for (int j  =  1+i ;  j <  n  ;  j++){
            if(A[j] < A[min]){
                min =  j;
            }

        }
        //Swaping A[i] and indexmin
        int temp = A[i] ; 
        A[i] =  A[min];
        A[min] =  temp;

    }
}

void Selection(int *A  ,  int N){

}
int main() {
  int A[] = {123, 43435, 212, 2, 4, 15121};
// int A [] = {1,2,3,4,5,6 };
// int A  [] =  {3,2,4,5 ,6 , 7 };
  int N = 6;
  printf("Printing before Sort\n");
  printArray(A, N);
  printf("After Sort\n");
//   BubbleSort(A, N);
// insertionSort(A,  N);
selectionSort(A, N);
  printArray(A, N);
  return 0;
}

// criteria for sorting
// 1 time complexity
// 2 space complexity --- Inplace sorting
// 3 stability   1,22,3,46,4,22       if two have same value then the stabiltiy
// will check who is came first
// the stable sorting algo will choose first
// 4 internal and external sorting algo
// internal all the data is loaded in the memeory
// external sorting all the data is not loaded in the memory

// 5 adaptive --> already sorted data is take less time
// 6 recursive and non-recursive if it use Recursion is good

// 1 Bubble sort
/* stability
not recursive algo

*/