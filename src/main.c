#include <stdio.h>
// #include "../include/stackArray.h"
// #include "../include/stackLinked.h"
#include "../include/stackCursor.h"

void insertBottom(Stack *S, char elem);

int main(int argc, char const *argv[])
{
    Stack myStack;
    initialize(&myStack);
    push(&myStack, 'C');
    push(&myStack, 'S');
    push(&myStack, 'D');
    push(&myStack, 'G');
    push(&myStack, 'C');
    push(&myStack, 'S');
    push(&myStack, 'U');
    // push(&myStack, 'C');
    // push(&myStack, 'T');
    // pop(&myStack);
    // pop(&myStack);
    // pop(&myStack);
    // pop(&myStack);
    // pop(&myStack);
    // pop(&myStack);
    // pop(&myStack);
    // pop(&myStack);
    // pop(&myStack);
    printf("Before calling make null\n");
    display(myStack);
    makeNull(&myStack);
    push(&myStack, 'S');
    push(&myStack, 'O');
    push(&myStack, 'P');
    push(&myStack, 'A');
    printf("\nAfter calling make null\n");
    display(myStack);
    printf("\nTOP: %c\n", top(myStack));
    insertBottom(&myStack, 'J');
    display(myStack);
    
    return 0;
}

void insertBottom(Stack *S, char elem) {
    if (isFull(*S)) {
        printf("STACK IS FULL CANNOT INSERT\n"); // Stack is full, insertion not possible.
    }

    Stack tempStack;
    initialize(&tempStack);

    // Pop elements from the original stack and push them onto the tempStack.
    while (!isEmpty(*S)) {
        push(&tempStack, pop(S));
    }

    // Push the new item onto the original stack.
    push(S, elem);

    // Pop elements from the tempStack and push them back onto the original stack.
    while (!isEmpty(tempStack)) {
        push(S, pop(&tempStack));
    }

    printf("Insert %c at the bottom of the stack\n", elem);
}