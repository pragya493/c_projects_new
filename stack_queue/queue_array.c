//circular queue

#include <stdio.h>
#include <stdbool.h>
#define N 5

typedef struct{
    int arr[N];
    int start;
    int end;
    int curr_size;
}Queue;

void queue_init(Queue* q){
    q->start = -1;
    q->end = -1;
    q->curr_size = 0;
}

bool isEmpty(Queue* q){
    return (q->start == -1);
}

bool isFull(Queue* q){
    return (q->curr_size == N);
}

void push(Queue* q, int val){
    if(isFull(q)){
        printf("Queue is full\n");
        return;
    }
    if(q->end == -1){
        q->start=0;
        q->end=0;
    }
    else{
        q->end = (q->end+1) % N;
    }
    q->arr[q->end] = val;
    printf("%d is pushed\n",q->arr[q->end]);
    q->curr_size++;
}

void pop(Queue* q){
    if(isEmpty(q)){
        printf("Queue is empty, can't pop\n");
        return;
    }
    int data = q->arr[q->start];
    printf("%d is poped\n",data);
    if(q->curr_size == 1){
        q->start=0;
        q->end=0;
    }
    else{
        q->start = (q->start+1) % N;
    }
    q->curr_size--;
}

void top(Queue* q){
    if(q->start == -1){
        printf("Queue is Empty\n");
        return;
    }
    printf("Top data is %d\n",q->arr[q->start]);
}

int main(){

    Queue q;
    queue_init(&q);
    push(&q, 1);
    push(&q, 2);
    push(&q, 3);
    push(&q, 4);
    top(&q);
    pop(&q);
    pop(&q);
    top(&q);

    return 0;
}

/*
1 is pushed
2 is pushed
3 is pushed
4 is pushed
Top data is 1
1 is poped
2 is poped
Top data is 3
*/