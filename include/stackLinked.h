#ifndef STACK_H
#define STACK_H

#define MAX 7

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int count;

/**
 * @brief Structure definition
 *
*/
typedef struct node {
	char elem;
	struct node *link;
} *Stack;

/**
 * @brief create and initialize the Stack data structure
 * 
 * @param S a pointer to a struct
 * 
*/
void initialize(Stack *S);

/**
 * @brief push or add an element to the Stack
 * 
 * @param S a pointer to a struct
 * @param ch element to add to the Stack
 * 
 */
void push(Stack *S, char elem);

/**
 * @brief Remove the top of the stack
 * 
 * @param S a pointer to a struct
 * 
 */
char pop(Stack *S);

/**
 * @brief display or print the elements of the stack
 * 
 * @param S a Stack structure
 * 
 */
void display(Stack S);
void makeNull(Stack *S);

bool isEmpty(Stack S);
bool isFull(Stack S);

char top(Stack S);

void initialize(Stack *S) {
	*S = NULL;
	count = 0;
}

void push(Stack *S, char elem) {
	Stack newNode = (Stack)malloc(sizeof(struct node));
	if (newNode != NULL) {
		newNode->elem = elem;
		newNode->link = *S;
		*S = newNode;
		count++;
	}
}

char pop(Stack *S) {
    if (*S == NULL) {
        printf("EMPTY\n");
    }
	Stack temp;
	temp = *S;
	*S = temp->link;
	count--;
	return temp->elem;
}

void display(Stack S) {
	while (S != NULL) {
		printf("%c ", S->elem);
		S = S->link;
	}
}

void makeNull(Stack *S) {
	*S = NULL;
}

char top(Stack S) {
	return S->elem;
}

bool isEmpty(Stack S) {
	return S == NULL ? 1 : 0;
}

bool isFull(Stack S) {
	return (count == MAX) ? 1 : 0;
}



#endif