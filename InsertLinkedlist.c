#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data ; 
    struct Node * next; 
};


void print(struct Node * Head){
    struct Node * ptr =  Head ;
    while(ptr != NULL){
        printf("%d" ,  ptr->data); 
        printf("\n");
        ptr =  ptr->next;
    } 

}

struct Node * inserAtHead (struct Node * Head ,  int value) {
    struct Node * ptr =  (struct Node *) malloc(sizeof(struct Node));
    ptr->data  =  value; 
    ptr->next  =   Head ; 

    return ptr ; 
}

void InsertBetwn   (struct Node * Head ,  int value  ,  int index){
  struct Node * ptr =  (struct Node *) malloc(sizeof(struct Node));
struct Node * p  = Head ; 
for (int  i  = 0 ;  i <  index - 1 ;  i++){
    p=p->next ; 
}
ptr->next  =  p->next ; 
p->next =  ptr ;
ptr->data =  value;
}

void InsertAtEnd  (struct Node * Head , int value ){
    struct Node * ptr  =  (struct Node *)malloc(sizeof(struct Node ));
    struct Node * p =   Head ; 
    while (p->next != NULL){
        p = p->next ; 
    }
    p->next  = ptr ; 
    ptr->data  =  value ; 
    ptr->next =  NULL;
}

int main (){

struct Node * Head ; 
struct Node * second ; 
struct Node * third ;


Head =  (struct Node *)malloc(sizeof(struct Node));
second  =  (struct Node *)malloc(sizeof(struct Node));
third  =  (struct Node *)malloc(sizeof(struct Node));

Head->data =  12;
Head->next  =  second ; 
second->data  =  13 ; 
second->next  =  third ;
third ->data  =  14;
third->next  = NULL ; 
print(Head);
printf("After Inserting At the Head \n");
Head = inserAtHead(Head ,  11) ; 
print(Head);
printf("Inserting in between\n") ;
InsertBetwn(Head ,  47 ,  2);
print(Head);
printf("Inserting At the End of the Link List \n "); 
InsertAtEnd(Head ,  20);
print(Head);
    return  0 ;
}


