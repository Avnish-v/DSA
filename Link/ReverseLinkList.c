#include<stdlib.h>
#include<stdio.h>
struct node {
    int data ; 
    struct node * next ;
    struct node * prev;
};

struct node * createLink(int data){
    struct node * n  =  (struct  node *)malloc(sizeof(struct node ));
    n->data =  data ; 
    n->next = NULL ; 
    n->prev =  NULL;

    return n;
}

void print(struct node * n){
    struct node * p  =  n ;
    while(p != NULL){
        printf("%d\n" ,  p->data);
        p  = p->next;
    }
}

struct node *reverse(struct node *n) {
    struct node *prev, *current, *next; // prev 
    prev = NULL; 
    current = n;
    while (current != NULL) {
        next = current->next; // next meh ek aage ka h data h
        current->next = prev; // prev
        prev = current; // prev  =  current 
        current = next; //
    }
    return prev;
}




struct node * rev(struct node * n){
    // struct node *prev ,  *current , *next ;
    // prev  =  NULL ; 
    // current =  n ;
    // while(n !=NULL){  // 1,2,3,4 current  =  1
    //     next =  current->next ;   //  next  =2    // temp
    //     current->next =  prev ; //  Null; 
    //     prev  =  current ;  // prev = 1
    //     current =  next;   // current  =  2
    // }
    // return prev ; 
    struct node *temp=NULL ,  *current =  n ;
    while(current !=  NULL){ // 1 2 3 4 
        temp = current->prev ;  // NULL
        current->prev =  current->next ; // NULL
        current->next =  temp ; // NULL
        current = current->prev  ;
    }
     if (temp != NULL) {n = temp->prev;  }
    return n;
}

int main(){
struct node * head  = createLink(29);
struct node * h2  =  createLink(2092);
struct node * h3 = createLink(1292);
struct node *h4  =  createLink(93892);
head->next = h2 ; 
h2->prev =  head;
h2->next = h3 ; 
h3->prev = h2;
h3->next =  h4;
print(head);
head  = reverse(head);
print(head);
    return 0 ;
}