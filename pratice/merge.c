#include<stdio.h>
#include<stdlib.h>


void print(int arr[] ,  int size){
    for(int i =0 ;  i <  size  ;  i ++)
        printf("%d\n",  arr[i]);
}

void merge(int  arr[] ,  int low  , int mid  ,  int high){
    int i = low ,  j = mid +1 , k = low , b[low + high +1];
while(i <= mid && j <= high){
    if(arr[i] < arr[j]){
        b[k] = arr[i];
        i++;k++;
    }else{
        b[k] = arr[j];
        k++; 
        j++;
    }
}

while(i <= mid){
b[k] = arr[i];
i++ ; k++;

} 
    while(j <= high){
b[k] = arr[j];
j++ ; k++;
} 

for(int i = low ; i <= high ; i++){
    arr[i] = b[i];
}

}


void merging(int a[] , int low ,  int high){
    int mid;
    if(low < high){
        mid =  (low + high)/2;
        merging(a ,  low ,  mid);
        merging(a , mid+1,high);
       merge(a,  low,  mid,  high);
     
    }
   
}


int  main (){
int arr[5]= {4309,11,5443,11,122};
print(arr ,  5);
printf("after sorting ...\n");
merging(arr, 0, 4);
print(arr,  5);
    return  0 ;
}