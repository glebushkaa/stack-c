#ifndef _STACK_H
#define _STACK_H

#define UNDERFLOW_VALUE -101

typedef struct {
    int size;
    int* arr;
} Stack;

Stack emptyStack();
int pop(Stack* stack);
void push(Stack* stack, int value);
int peek(Stack* stack);
int size(Stack* stack);
int isEmpty(Stack* stack);

#endif
