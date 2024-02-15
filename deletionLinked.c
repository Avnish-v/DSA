#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data  ; 
     struct  Node * Next ; 

} ;


void print (struct Node * head) {
    struct Node * ptr =   head;
    while (ptr !=  NULL){
        printf("%d \n" ,  ptr->data);
        ptr = ptr->Next;
    }

}

struct Node * deleteHead (struct Node * head){
    struct Node * ptr =  head->Next  ; 
    free(head) ; 
    return ptr;
}

void DeleteBetween   (struct Node * Head , int indx) {
        struct Node * p  =  Head ; 
        struct Node * q = Head->Next ;
        for(int i = 0 ;  i < indx - 1  ; i ++){
            p= p->Next ; 
            q = q->Next;    
        }
p->Next =  q->Next ; 
free(q);
}

void deleteLast  (struct Node * Head){
    struct Node * p =   Head ; 
    struct Node * q =  Head->Next;

    while (q->Next !=NULL){
        p =  p->Next ; 
        q =  p->Next ;
    }
    p->Next  = NULL ; 
    free(q);
}
int main (){
     struct Node *head, *two, *three;
    head=  (struct Node *)malloc(sizeof(struct Node)) ;
       two=  (struct Node *)malloc(sizeof(struct Node)) ;
          three=  (struct Node *)malloc(sizeof(struct Node)) ;
    head->data  =  1 ;
    head->Next =   two ; 
    two->data  = 2 ;
    two->Next  =  three ; 
    three->data  =  3; 
    three->Next =  NULL;
    print(head); 


    // printf("After deletion Head , \n"); 
    // head =  deleteHead(head);
    // print(head);
    printf("deleting the between\n");
    DeleteBetween(head , 1);
    print(head);
    printf("Deleting the last Node\n");
    deleteLast(head );
    print(head);
    return 0 ;
}




