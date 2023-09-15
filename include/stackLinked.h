#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

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
void pop(Stack *S);

/**
 * @brief display or print the elements of the stack
 * 
 * @param S a Stack structure
 * 
 */
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