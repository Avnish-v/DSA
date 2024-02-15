#include<stdio.h>
#include<stdlib.h>


void print(int a [] , int n ){
    for(int i  = 0 ;  i < n ; i++){
        printf("%d\n" ,  a[i]);
    }
}

int main (){
int a []= {213,1324,1,11334,35433};
int n = 5;
print(a , n);
    return  0 ;
}