#include <stdio.h>
#include <stdbool.h>
#define N 100

typedef struct{
    int arr[N];
    int top;
}Stack;

void initialize_stack(Stack* s){
    s->top = -1;
}

bool isEmpty(Stack* s){
    return (s->top == -1);
}

bool isFull(Stack* s){
    return (s->top == N-1);
}

void push(Stack* s, int val){
    if(isFull(s)){
        printf("Stack overflow\n");
        return;
    }
    s->arr[++s->top] = val;
    printf("Pushed data is %d\n",s->arr[s->top]);
}

void pop(Stack* s){
    if(isEmpty(s)){
        printf("Nothing to pop, stack is empty\n");
        return;
    }
    int data = s->arr[s->top--];
    printf("Poped data is %d\n",data);
}

int top(Stack* s){
    if(isEmpty(s)){
        return -1;
    }
    printf("Top data is %d\n",s->arr[s->top]);
    return s->arr[s->top];
}


int main(){

    Stack s;
    initialize_stack(&s);
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    push(&s, 4);
    top(&s);
    pop(&s);
    pop(&s);
    top(&s);

    return 0;
}

/*
Pushed data is 1
Pushed data is 2
Pushed data is 3
Pushed data is 4
Top data is 4
Poped data is 4
Poped data is 3
Top data is 2
*/