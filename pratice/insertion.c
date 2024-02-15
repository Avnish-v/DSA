#include<stdio.h>
#include<stdlib.h>

void print(int a[] , int  n){
    for(int i =0  ; i< n ; i++)
        printf("%d\n" ,  a[i]);
}

void insertion(int *a  ,  int n ){
    int j  , key ;
    for(int i  = 1 ;  i < n -1 ;i++){
        key  =  a[i];
        j  = i-1;
        while(a[j] <  key){
            
        }

    } 
}
int main (){
      int a [4] = {2938 ,22 ,42322,11 };

    print(a ,  4);
    insertion(a  ,  4);
    return 0 ;
}