#include<stdio.h>
#include<stdlib.h>

struct node {
    int data ; 
    struct node * left ; 
    struct node * right  ; 
};
struct node * create(int data){
    struct node * n  =  (struct node *)malloc(sizeof(struct node));
    n->data =  data ; 
    n->left = NULL;
    n->right = NULL;
    return n;
}
void inorder   (struct node * root){
    if(root != NULL){
        inorder(root->left);
        printf("%d\n" ,  root->data);
        inorder(root->right);
    }
}
void preorder (struct node * root){
    if(root != NULL){
        printf("%d\n" ,  root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder (struct node * root){
    if(root !=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d\n" ,  root->data);
    }
}
int bst(struct node * root){
    static struct node * prv  =  NULL;  // prev NUll  
 if(root == NULL){
    return 1;     //! bst h idhar 
 } else {
    if(!bst(root->left)){   
        return 0 ;
    }
    if(prv != NULL && root->data <= prv->data){  
                return 0 ;
    }
    prv =  root ;
    return bst(root->right);
 }  
} 

struct node * search  (struct node * root  , int val){
    if(root == NULL){
        return NULL;
    }
    if(root ->data  == val){
        return root; 
    }else if(root->data > val){
        return search(root->left ,  val);
    }else {
        return search(root->right ,  val);
    }
    
}

int main (){
    struct node * p  =  create(23);
    struct node * bl1 = create(22);
    struct node * br1 = create(24);
    struct node * bl2 =  create(21);
    struct node * br2  =  create(25);
    //! root
    p->left = bl1;
    p->right =  br1;
    //! 2 level
    bl1->left = bl2 ;
    br1->right = br2;
   
    inorder(p);
    printf("dtaa in pre \n");
    preorder(p);
    printf("post order\n");
    postorder(p);

    printf("is bts %d\n",  bst(p));
    printf("%d\n",search(p ,25));
    printf("%d\n", search(p ,25));

    return 0;
}