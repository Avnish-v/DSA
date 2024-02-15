#include <stdio.h>
#include<stdlib.h>

struct Node {
    int data ; 
    struct Node * next ; 
};

void print(struct Node * head){
        struct Node * p  =  head ;
        do{
            printf("printing the circular linked list %d \n" ,  p->data);
            p = p->next;
        }while(p != head );
}


int main (){
 struct Node *Head, *second, *third;
Head =  (struct Node *)malloc(sizeof(struct  Node)); 
second  = (struct Node *)malloc(sizeof(struct  Node)); 
third = (struct Node *)malloc(sizeof(struct Node)); 
Head->data =  12 ; 
Head->next = second ; 
second->data  =  13 ; 
second->next  =  third ; 
third->data  =  14 ;
third->next =  Head ; 
print(Head);

    return  0 ;
}