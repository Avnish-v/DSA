#include<stdio.h>
#include <stdlib.h>
#include <sys/types.h>
struct node{
    int data ; 
    struct node * left ; 
    struct node * right ; 
};

struct node *create(int data) {
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void inorder(struct node * root ){
   if(root != NULL){
    inorder(root->left) ; 
    printf("%d\n" ,  root->data);
    inorder(root->right);
   }
}

int main (){
struct node *root  =  create(400) ; 
struct node * rootL =  create(380) ; 
struct node * rootR =  create(410) ; 
struct node * r2R =  create(420) ; 
struct node * r2l = create(405);
struct node * r2ll =  create(360);
struct node * r2lr =  create(390);

root->left = rootL ; 
root->right =  rootR ; 
r2l->left = r2ll;
r2l->right = r2lr;
rootR->left = r2l;
rootR->right = r2R;
inorder(root);

    return 0 ;
}