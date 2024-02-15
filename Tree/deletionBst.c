#include<stdio.h>
#include<stdlib.h>
//! three cases leaf node delete 2. parent node  3. root node;
struct node{
    int data; 
    struct node * left ;
    struct node * right;
};
struct node * create (int data){
    struct node * n  = (struct node *)malloc(sizeof(struct node));
    n->data =  data ; 
    n->left =  NULL;
    n->right =  NULL;
    return n;
}
void inorder (struct node * root){
    if(root != NULL){
        inorder(root->left);
        printf("%d\n" ,  root->data);
        inorder(root->right);
    }
}


struct node * deleteNode(struct node * root , int data){
    //Search for t
    while(root != NULL){
        if(root->data  > data){
            root = root->left;
        }

    }
}

int main (){
    struct node * root  =  create(300);
    struct node *oneL =  create(290);
    struct node *oneR =  create(310);
    struct node *L_two_L = create(280);
    struct node *L_two_R  =  create(291);
    struct node *r_two_l = create(305) ;
    struct node *r_two_r = create(320);
    root->left = oneL ;
    root->right = oneR ;
    oneL->left = L_two_L;
    oneL->right =L_two_R ;
    oneR->left = r_two_l ;
    oneR->right =  r_two_r;
    inorder(root);
    return  0 ;
}