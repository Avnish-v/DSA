#include<stdio.h>
#include<stdlib.h>

struct node {
    int data ;
    struct node * left ;
    struct node *right;
};

struct node * create(int data){
    struct node * n;
    n = (struct node *) malloc(sizeof(struct node)); 
    n->data =  data ; 
    n->left =NULL;
    n->right =NULL;
    return n;
}

void preorder (struct node * root){
    
    if(root !=NULL){
        printf("%d\n" , root->data);
        preorder(root->left);
        preorder(root->right);

    }

}

void postorder(struct node * root){
    if(root != NULL){
        postorder(root->left);
         postorder(root->right);
        printf("%d\n",root->data);
    }
}
void inorder(struct node * root){
    if(root != NULL){
        inorder(root->left);
         printf("%d\n",root->data);
         inorder(root->right);
       
    }}

int checkBST(struct node * root){
    static struct node *prev  =  NULL;

    if(root == NULL){
        return 1;
    }
    if(root !=NULL){
       if(!checkBST(root->left)){
        return  0;
       }
       if(prev !=NULL && root->data <= prev->data){
        return  0;
       }
       prev  =  root;
       return checkBST(root->right);

    }
}

int main(){
struct node * root = create(14);
struct node * node1 =  create(10);
struct node * node2 = create(16);
struct node * node3 = create(6);
struct node*node4 = create(15);

root->left = node1;     // 14 
root->right =  node2; // 12   11 
                  // 10    9
node1->left = node3; 
node2->right = node4;
preorder(root);
printf("this post \n" );
postorder(root);
printf("this in inorder\n");
inorder(root);
printf("this is bst %d\n",checkBST(root));
    return 0 ;
}