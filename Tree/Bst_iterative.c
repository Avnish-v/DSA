#include<stdio.h>
#include<stdlib.h>


struct node {
    int data  ; 
    struct node * left ;
    struct node * right ; 
};

struct node * create(int data){
    struct node *p  =  (struct node *)malloc(sizeof(struct node));
    p->data  =  data; 
    p->left =  NULL;
    p->right = NULL;
    return p;
}

void inorder(struct node * root){
    if(root != NULL){
        inorder(root->left);
        printf("%d\n" ,  root->data);
        inorder(root->right);
    }
}

//! relatively slow but it faster than the iterative method ;
struct node * search(struct node * root  ,  int data){
    if(root == NULL){
        return NULL;
    }
    if(root->data  ==  data){
        return root ;
    }else if(root->data > data){
        return search(root->left , data);
    }else {
        return search(root->right,  data);
    }
}
 /// !! little slow but not use the memory extensive and prevent the stack to get overflow ;

struct node * iterativeSearch(struct node * root  ,  int data){
    while(root != NULL){
        if(root->data  == data ){
            return root;
        }else if(root->data >  data){
             root  =  root->left;
        }else {
             root  =  root->right;
        }
    }
    return NULL;
}

//! insertion in tree bst ;

void insert(struct node * root  , int data){
    struct node * prev  =  NULL;
    struct node *ptr =create(data);
    ptr->left = NULL;
    ptr->right = NULL;
    while(root != NULL){
        prev =  root ;
        if(data  == root->data){
            return ;
        }else if(data  < root->data){
            root  = root->left;
        }else{
            root =root->right;
        }
    }
    if(prev->data > data){
        prev->left= ptr ;
    }else if(prev->data < data){
        prev->right  = ptr ;
      

    }
}
int main  (){
struct node * root =  create(200);
struct node * secL =  create(180);
struct node * secR  =  create(210);
struct node *thL  = create(170);
struct node *thR =  create(190);
root->left = secL ;
root->right =  secR;
secL->left = thL ; 
secL ->right  =  thR;
inorder(root);
struct node * b  = iterativeSearch(root,  180);
if(b  != NULL){
    printf("found data -:  %d \n" ,  b->data);
}else{
    printf("data is not in the tree \n");
}
insert(root, 12);
inorder(root); 
    return 0 ;
}