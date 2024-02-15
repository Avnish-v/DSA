#include<stdio.h>


void print (int * A  , int n){
    for(int i = 0 ; i < n ; i++){
        printf("%d\n" , A[i]);
    }
}
int partition(int A [] , int low  , int high){
    int pivot =  A[low];
    int i = low +1 ;
    int j  =  high ;
    int temp;
do{
    while (A[i] <  pivot){
        i++;
    }    
    while (A[j] >  pivot){
        j--;
    }
    if(i <  j){
        temp   =  A[i]; 
        A[i] =  A[j]; 
        A[j] =  temp;

    }
    }while(i <  j);
        temp = A[low];
        A[low] = A[j];
        A[j] = temp;
        return j;
}
void QuickSort(int A [] ,  int low ,  int high){
    int partitionIndex = 0 ; // index pivot    start toh idhar se he hoga ke  [4,32,3,1]

    if (low < high) {
        partitionIndex = partition(A, low, high);
        QuickSort(A, low, partitionIndex - 1);  // Corrected the recursive calls
        QuickSort(A, partitionIndex + 1, high);
    }
}
int main (){
    int A [] = {43,212,212,156,8754,12 , 928309,11,21242,24566,132435,254667,42423,2};
    int N =  14 ;
    print(A , N);
    QuickSort(A , 0 ,  N-1 );
    printf("After sorting the Array\n");
    print(A, N);


    return 0 ;
}