#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack {
    int Top;
    int size;
    char *arr;
};

int Isempty(struct stack *s) {
    return s->Top == -1;
}

int Isfull(struct stack *s) {
    return s->Top == s->size - 1;
}

void push(struct stack *s, char value) {
    if (Isfull(s)) {
        printf("Unable to push, stack is overflow\n");
        return;
    }
    s->Top++;
    s->arr[s->Top] = value;
}

void pop(struct stack *p) {
    if (Isempty(p)) {
        printf("Stack is Empty\n");
        return;
    }
    p->Top--;
}

int paranthesismatching(struct stack *ptr, char *exp) {
    for (int i = 0; exp[i] != '\0'; i++) {
        if (exp[i] == '(') {
            push(ptr, exp[i]);
        } else if (exp[i] == ')') {
            if (Isempty(ptr)) {
            
                return 0;
            } else {
                pop(ptr);
            }
        }
    }

    if (Isempty(ptr)) {
       
        return 1;
    } else {
    
        return 0;
    }
}

int main() {
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 90;
    s->Top = -1;
    s->arr = (char *)malloc(sizeof(char) * s->size);

    // Copy the string into dynamically allocated memory
   char * exp = "(23()$^)(()()()((**()()))(((())()(+))";

    int match = paranthesismatching(s, exp);

    if (match) {
        printf("Parenthesis matched...\n");
    } else {
        printf("Parenthesis not matched\n");
    }

    free(s->arr);
    free(s);
    return 0;
}
