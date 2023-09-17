#ifndef STACK_H
#define STACK_H

#include <stdbool.h>
#include <stdio.h>
#define MAX 7 // Macro definition indicating the MAX size of the Stack

/**
 * @brief Structure definition
 *
*/
typedef struct Stack {
    char elem[MAX];
    int top;
} Stack;

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

/**
 * @brief Checks if the Stack is full based on the macro definition returns 1 if true, else 0 false
 * 
 * @param S a Stack structure
 * @return true
 * @return false
 * 
 */
bool isFull(Stack S);

/**
 * @brief Checks if the Stack is empty returns 1 if true, else 0 false
 * 
 * @param S a Stack structure
 * @return true
 * @return false
 * 
 */
bool isEmpty(Stack S);

void makeNull(Stack *S);

char top(Stack S);

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

char pop(Stack *S) {
    if (isEmpty(*S)) {
        printf("ARRAY IS EMPTY CANNOT POP\n");
    } else {
        return S->elem[S->top--];
    }
}

void display(Stack S) {
    int indx;
    for (indx = S.top; indx >= 0; indx--) {
        printf("%c ", S.elem[indx]);
    }
}

void makeNull(Stack *S) {
    S->top = -1;
}

char top(Stack S) {
    return S.elem[S.top];
}

#endif