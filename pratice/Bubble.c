#include<stdio.h>
#include<stdlib.h>


void print(int a[] , int  n){
    for(int i =0  ; i< n ; i++)
        printf("%d\n" ,  a[i]);
}

void bubblesort(int * a ,  int n){
    for(int i = 0; i < n -1  ; i++){
        for(int j  = 0 ; j < n - 1- i ; j ++){
            if(a[j] > a[j +1]){
            int temp = a[j+1];
            a[j+1] = a[j];
            a[j] =  temp;
            }
        }
    }
}

int main (){
    int a [4] = {2938 ,22 ,42322,11 };
    print(a ,  4);
    printf("After sorted ----\n");
    bubblesort(a ,  4);
    print(a, 4);
    return 0;
}

//! faltu h 