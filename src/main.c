#include <stdio.h>
// #include "../include/stackArray.h"
// #include "../include/stackLinked.h"
#include "../include/stackCursor.h"

void insertBottom(Stack *S);

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
    

    return 0;
}

void insertBottom(Stack *S) {

}
