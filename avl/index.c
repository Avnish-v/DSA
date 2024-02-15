#include<stdio.h>
#include<stdlib.h>
struct node {
    int data  ; 
    struct node * left ;
    int height ; 
    struct node * right  ;
};


int getheight (struct node * n){
    if(n == NULL)
           return 0 ; 
    return n->height;
}

struct node * create(int data){
    struct node * n  = (struct node *) malloc(sizeof(struct node));
    n->data =  data ; 
    n->left = NULL;
    n->right  =  NULL;
    n->height   = 1; 
    return  n ;
}

int getbalance(struct node * root){
    if(root == NULL){
        return  0;
    }else{
        return getheight(root->left)-  getheight(root->right);
    }
} 

struct node * roatateLeft(struct node * root){
  struct node * p  = root->left ; 
  struct node * q  = root->right;
  p->right  = root ;
  root->left =  q; 
  root->height =max(getheight(root->right)  , getheight(root->left)) +1 ;
  p->height = max(getheight(struct node *n) , getheight(struct node *n)) + 1;
  return  p ;
}


struct node * rotateRight(struct node * root){
    struct node * p =  root->right; 
    struct node * q = root->left ;
       
}

int main (){
    struct node * root  =  create(500);
      
        
    return  0;
}


// <source src="https://dev-certify.pantheonsite.io/wp-content/uploads/2024/01/certify.ogv" type="video/ogg">
//   <source type="video/quicktime" src="https://dev-certify.pantheonsite.io/wp-content/uploads/2024/01/certify.mov">
//   <source type="video/webm; codecs=vp9" src="https://dev-certify.pantheonsite.io/wp-content/uploads/2024/01/certify.webm" >