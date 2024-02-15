#include<stdio.h>
#include<stdlib.h>

struct stack {
 int size ; 
 int top ;
 int * arr ; 
};

int isEmpty (struct stack * ptr){
if(ptr->top == -1){

    return 1 ; 
}
    return  0 ;
}

int isFull (struct stack * ptr){
    if(ptr->top == ptr->size - 1){
    return 1 ; 
}
    return  0;
}


void push(struct stack * stack ,  int value){
    if(isFull(stack)){
        printf("stack is full");
    }else{
        stack->top++;
       stack->arr[stack->top] =  value ; 
    }
}

int peek(struct stack * stack  ,  int peek){

    if(stack->top - peek + 1   <  0){
        printf("invalid  , postion ") ;
        return -1;
    }else{
        return stack->arr[stack->top -peek  + 1];

    }
}
int pop(struct stack * stack ){
    if(isEmpty(stack)){
        printf("stack is empty"); 
        return  -1;
    }else{
        int val  =  stack->arr[stack->top];
        stack->top -- ; 
        return val;
    }
}

int main (){
    struct stack *s; 

    s->size  =  80 ; 
    s->top  = -1 ; 
    s->arr = (int *)malloc(s->size * sizeof(int));
    s->arr[0] =  2323; 
    s->top++;
    if(isEmpty(s)){
        printf("stack is empty") ;
    }else{
        printf("stack is not empty");
    }

    int data  =  pop(s);
    printf("data is pop %d" , data);

    push(s ,  12);
      push(s ,  12);
        push(s ,  12);
          push(s ,  12);
            push(s ,  12);
              push(s ,  12);
                push(s ,  12);
                  push(s ,  12);
                    push(s ,  12);



    data  =     pop(s);
    printf("data is poped ,  %d" ,  data);
    data   =  peek(s ,  1);
    printf("\n%d " , data);


    



    return 0;
}

//! if stack is empty we can not pop and if stack is full we can't push 