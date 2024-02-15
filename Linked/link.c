#include<stdio.h>
#include<stdlib.h>


struct Node {
    int data ; 
    struct Node * next;
};

struct Node * create(int data){
    struct Node * p  =  (struct Node *)malloc(sizeof(struct Node ));
    p->data =   data;
    p->next =   NULL;
    return p ;
}

void printReverse(struct Node * head){
    if(head == NULL){
        return;
    }
    int i = 0;
    printReverse(head->next);
    printf("%d\n", head->data);

}
int main(){
struct Node * head  =  create(212);
struct Node * h2  =  create(32932);
struct Node * h3 =  create(23382);
head->next =  h2;
h2->next =  h3;
printReverse(head);

}