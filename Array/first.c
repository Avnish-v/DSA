#include<stdio.h>
#include<stdlib.h>


void rev(int arr [] ,  int n ){
    int start  = 0 ; 
    int end  =  n - 1;
    while (start <  end){
        int temp = arr[start] ; 
        arr[start] = arr[end];
        arr[end] =  temp;
        start ++ ; 
        end --;
    }

}

void print(int arr [] , int n ){
    for(int i =0 ; i < n  ;  i ++){
        printf("%d\n" , arr[i]);
    }
}
int main (){
int data  [] = {1,2,3,4,5,6} ; 
int length  =  6;
print(data , length);
rev(data ,  length);
print(data, length);



    return 0 ;
}