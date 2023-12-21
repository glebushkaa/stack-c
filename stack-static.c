#include "stack-static.h"

#include <stdio.h>
#include <stdlib.h>

Stack emptyStack() { 
    return (Stack) { 0 };
}

int pop(Stack* stack) {
    if (stack->size <= 0) {
        exit(UNDERFLOW_VALUE);
    }
    int value = stack->arr[stack->size - 1];
    stack->size--;
    return value;
}
void push(Stack* stack, int value) {
    if(stack->size >= MAX_STACK_SIZE) {
        exit(OVERFLOW_VALUE);
    }
    stack->arr[stack->size] = value;
    stack->size++;
}
int peek(Stack* stack) {
    if (stack->size <= 0) {
        exit(UNDERFLOW_VALUE);
    }
    int value = stack->arr[stack->size - 1];
    return value;
}
int size(Stack* stack) { return stack->size; }
int isEmpty(Stack* stack) { return stack->size == 0; }
