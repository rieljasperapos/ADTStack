#ifndef STACK_H
#define STACK_H

#include <stdbool.h>
#include <stdio.h>
#define MAX 5

typedef struct {
    char elem[MAX];
    int top;
} Stack;

void initialize(Stack *S);
void push(Stack *S, char elem);
void pop(Stack *S);
void display(Stack S);
bool isFull(Stack S);
bool isEmpty(Stack S);

void initialize(Stack *S) {
    S->top = -1;
}

bool isFull(Stack S) {
	return (S.top + 1 == MAX) ? 1 : 0;
}

bool isEmpty(Stack S) {
	return (S.top == -1) ? 1 : 0;
}

void push(Stack *S, char elem) {
    if (isFull(*S)) {
        printf("ARRAY IS FULL CANNOT PUSH\n");
    } else {
        S->elem[++S->top] = elem;
    }
}

void pop(Stack *S) {
    if (isEmpty(*S)) {
        printf("ARRAY IS EMPTY CANNOT POP\n");
    } else {
        S->top--;
    }
}

void display(Stack S) {
    int indx;
    for (indx = S.top; indx >= 0; indx--) {
        printf("%c ", S.elem[indx]);
    }
}

#endif