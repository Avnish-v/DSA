#include<stdio.h>
#include<stdlib.h>

struct Node  {
    int data ; 
    struct Node * next;
};


void print(struct Node * Top ){
    while(Top != NULL){
        printf("elements %d \n ", Top->data);
        Top =  Top->next;
    }
}

int Isempty(struct Node * Top){
    if(Top == NULL)
    return 0; 
    else
    return  1;
}

int IsFull(struct Node * Top ){
    struct Node  * p = (struct Node * )malloc(sizeof(struct Node));
    if(p == NULL)
        return 1;
}

struct  Node * push(struct Node * Top ,  int Value){
        if(IsFull(Top)){
        struct Node * ptr =(struct Node *)malloc(sizeof(struct Node)) ; 
        ptr ->data  =  Value ; 
        ptr->next =  Top ; 
        return ptr ;
        }else {
            printf("Stack is Full\n");
        }    
}

struct Node* pop(struct Node * Top ){
    if(Isempty(Top)){
      struct Node * ptr  =  Top->next ; 
      free(Top);  
      return ptr ; 
    }else{
        printf("Stack is Empty..\n");
        return Top;
    }
}

int main (){
struct Node* Top =  NULL ; 
 Top =push(Top ,  123) ; 
 Top =  push(Top , 123);
 Top =  push(Top , 1);
 Top =  push(Top , 113243);
 Top =  pop(Top);
 Top =  pop(Top);
 
 print(Top);
    return  0 ; 
}