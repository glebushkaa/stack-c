#ifndef _STACK_H
#define _STACK_H

#define MAX_STACK_SIZE 20
#define UNDERFLOW_VALUE -101
#define OVERFLOW_VALUE -100

typedef struct {
    int size;
    int arr[20];
} Stack;

Stack emptyStack();
int pop(Stack* stack);
void push(Stack* stack, int value);
int peek(Stack* stack);
int size(Stack* stack);
int isEmpty(Stack* stack);

#endif
