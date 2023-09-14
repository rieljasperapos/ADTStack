#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

// Structure definitions
typedef struct node {
	char elem;
	struct node *link;
} *Stack;

void initialize(Stack *S);
void push(Stack *S, char elem);
void pop(Stack *S);
void display(Stack S);

void initialize(Stack *S) {
	*S = NULL;
}

void push(Stack *S, char elem) {
	Stack newNode = (Stack)malloc(sizeof(struct node));
	if (newNode != NULL) {
		newNode->elem = elem;
		newNode->link = *S;
		*S = newNode;
	}
}

void pop(Stack *S) {
    if (*S == NULL) {
        printf("EMPTY\n");
    }
	Stack temp;
	temp = *S;
	*S = temp->link;
}

void display(Stack S) {
	while (S != NULL) {
		printf("%c ", S->elem);
		S = S->link;
	}
}

#endif