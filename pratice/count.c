#include <limits.h>
#include <stdint.h>
#include<stdio.h>
#include<stdlib.h>

void print(int arr[] , int n){
     
    for(int i  = 0 ;  i <  n-1; i++){
        printf("%d\n", arr[i]);
    }
}



int max (int a[] , int n ){
    int max  =INT_MIN;
    for(int i =0 ; i <  n-1; i++){
        if(max < a[i]){
            max  = a[i];
            return max ;
        }
    }
}


void countSort(int * a,  int size){
   int maximum =  max(a , size);
   int * newarr =  (int *)malloc((maximum +1 )*sizeof(int)); 
   for(int i =0 ; i < size -1  ; i++ ){
    a[i] = 0;
   }





}
int main (){
    int a[5] ={299,22,445,11,32};
    int n  =  5;
    print(a ,  n);

    return  0 ;
}