#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ; 
    struct node * left ; 
    int height ; 
    struct node * right ;
};

int getheight(struct node * n){
    if(n== NULL)
        return  0;
    
    return n->height ;
}

struct node * createNode(int data){
    struct node * n = (struct node *)malloc(sizeof(struct node));
    n->data =  data ; 
    n->left =  NULL ; 
    n->right =  NULL ;
    n->height   =  1; 
    return n ;
}
int balancefactor(struct node * n){
    if(n== NULL)
        return  0 ;
    
    return getheight(n->left) -  getheight(n->right);
}
struct node * RR(struct node * y){
    struct node * x  =  y->left;
    struct node * t2  = x->right; 
    x->right =  y ; 
    y->left  =  t2;

}

struct node * Rl(struct node * y){

}


struct node * 


int main (){
struct node * root  =  createNode(400);
struct node *root1 =  createNode(310);
    return  0 ;
}