#include <stdio.h>
#include "stack.h"

void main() {
    Stack stack = emptyStack();

    push(&stack, 8);
    push(&stack, 2);
    push(&stack, 3);
    push(&stack, 5);
    push(&stack, 3);

    printf("Size after push: %i\n", size(&stack));
    printf("Is empty after push: %i\n", isEmpty(&stack));

    while(stack.size > 0) {
        int value = peek(&stack);
        printf("Pop value: %i\n", value);
    }
    printf("Size value: %i\n", stack.size);
    printf("Is empty after push: %i\n", isEmpty(&stack));
}