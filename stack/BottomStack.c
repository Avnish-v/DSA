#include<stdio.h>
#include<stdlib.h>
struct Node  {
    int data ; 
    struct Node * next;
};




void print(struct Node * Top){
    while (Top != NULL){
        printf("element -:%d\n" , Top->data);
        Top =  Top->next;
    }
}
int Isempty(struct Node * Top){
if(Top == NULL){
    return 0;
}
return 1;

}

int Isfull(struct Node * Top) {
    struct Node * ptr  =  (struct Node *)malloc(sizeof(struct Node)) ;
if(ptr == NULL){
    return 0;
}
free(ptr);
return 1 ;

}

void Bottom (struct Node * Top ){
    if(Isempty(Top)){
        struct Node * ptr  =  Top ; 
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        printf("this is the Bottom %d \n", ptr->data);
    }
}

void peek(struct Node * Top, int position){
    if(Isempty(Top)){
        struct Node * ptr  =  Top; 
    for (int i =0  ; i < position - 1 ; i++){
        ptr =  ptr->next;
    }
    printf("this is the Data you peek %d\n" , ptr->data);

    }

}

void TopValue (struct Node * Top){
if(Isempty(Top)){
    printf("this is Top%d\n" ,  Top->data);
}
}

struct Node * push(struct Node * Top ,  int value){
    if(Isfull(Top)){
        struct Node * ptr  =  (struct Node *)malloc(sizeof(struct Node ));
        ptr -> data  =  value;
        ptr ->next  =  Top ; 
        return ptr;
    }
    printf("stack is overflow");
    return Top ;

}

struct Node * pop(struct Node * Top){
if(Isempty(Top)){
struct Node * ptr  =  Top->next;
free(Top) ;
return ptr;
}
printf("Stack is Empty unable To  pop\n"); 
return Top ; 
}




int main (){
struct Node * Top  =  NULL ; 
Top =  push(Top ,  13);
Top =  push (Top ,  15);
print(Top) ;
Bottom(Top);
TopValue(Top);
peek(Top,2);
Top =  pop(Top);
printf("after Pop \n");
print(Top);
    return  0 ;
}