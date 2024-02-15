#include<stdio.h>
#include<stdlib.h>

struct node {
    int data ; 
    struct node * left ;
    struct node * right;
};


struct node* CreatingNode(int data  ){
    struct node* n = (struct node *)malloc(sizeof(struct node));
  n->data =  data ; // seting the data  in linked list
  n->left = NULL; //setting left and right
  n->right = NULL;
  return n  ;
}



void preorder(struct node * root){
    if(root != NULL){
        printf("%d\n" ,  root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node * root){
    if(root !=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d\n" , root->data);
    }
}
void inorder (struct node * root){
    if(root != NULL){
        inorder(root->left);
         printf("%d\n" , root->data);
         inorder(root->right);
    }
}
void freeEach(struct node * root){
    if(root != NULL){
        freeEach(root->left);
        freeEach(root->right);
        free(root);

    }
}

int main (){

    // //! root node construct ;
    // struct node * p ; 
    // p =  (struct node *) malloc(sizeof(struct node));
    //  p->left =  NULL;
    //  p->right =  NULL;

    //  //! child 1 node
    //  struct node * p1 ; 
    // p1=  (struct node *) malloc(sizeof(struct node));
    //  p1->left =  NULL;
    //  p1->right =  NULL;
    //  //! child 2 Node 
    //  struct node * p2 ; 
    // p2 =  (struct node *) malloc(sizeof(struct node));
    //  p2->left =  NULL;
    //  p2->right =  NULL;

    //  //! linkin the child to parent 
    //  p->left  =  p1 ; 
    //  p->right  =  p2;

    struct node * p =  CreatingNode(23 );
    struct node *p1 = CreatingNode(12);
    struct node *p2 =  CreatingNode(112);
    struct node *p3 =  CreatingNode(12);
    struct node * p4  = CreatingNode(29);
    struct node * p5  = CreatingNode(2);
    p->left =  p1 ;
    p->right = p2;
    p1->left  =  p3;
    p2->left = p5;
    p2->right = p4;

    preorder(p);
    printf("after Post 0rder \n");
    postorder(p);
    printf("inorder \n");
    inorder(p);
    freeEach(p);
    p = NULL;
}

//Pre order traversal//! root- > left -> right

//Post order  //!left -> right - > root;

//Inorder traversal //! left-> root->right