#include <stdio.h>
#include "../include/stackArray.h"

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
    // pop(&myStack);
    // pop(&myStack);
    // pop(&myStack);
    // pop(&myStack);
    // pop(&myStack);
    // pop(&myStack);
    // pop(&myStack);
    // pop(&myStack);
    display(myStack);

    return 0;
}
