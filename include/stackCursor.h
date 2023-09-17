#ifndef STACK_H
#define STACK_H

#define MAX 7

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char elem;
    int link;
} Node;

typedef struct {
    Node datas[MAX];
    int avail;
} virtualHeap;

typedef struct {
    virtualHeap VH;
    int top;
    int count;
} Stack;

void initialize(Stack *S);
void deallocSpace(virtualHeap *VH, int index);
int allocSpace(virtualHeap *VH);
void push(Stack *S, char elem);
char pop(Stack *S);
void display(Stack S);
char top(Stack S);
bool isEmpty(Stack S);
bool isFull(Stack S);
void makeNull(Stack *S);

void initialize(Stack *S) {
    // S->VH = (virtualHeap *)malloc(sizeof(virtualHeap));
    // initialize the virtual heap
    int indx;
    for (indx = 0; indx < MAX; indx++) {
        S->VH.datas[indx].elem = 'X';
        S->VH.datas[indx].link = indx - 1;
    }

    // set the available index
    S->VH.avail = MAX - 1;

    // set the top to -1
    S->top = -1;

    // counter to keep track of how many elements inside the Stack
    S->count = 0;
}

int allocSpace(virtualHeap *VH) {
    // return value for the available index
    int retVal = VH->avail;
    if (retVal != -1) {
        VH->avail = VH->datas[retVal].link;
    }
    return retVal;
}

bool isFull(Stack S) {
    return S.count == MAX ? 1 : 0;
}

bool isEmpty(Stack S) {
    return S.top == -1 ? 1 : 0;
}

void push(Stack *S, char elem) {
    // implement the inserting like linked list
    int newIndex = allocSpace(&S->VH);
    if (newIndex != -1 && (!isFull(*S))) {
        S->VH.datas[newIndex].elem = elem;
        S->VH.datas[newIndex].link = S->top;
        S->top = newIndex;
        S->count++;
    } else {
        printf("Stack is full cannot push\n");
    }
}

char pop(Stack *S) {
    if (S->top != -1) {
        int temp = S->top;
        S->top = S->VH.datas[S->top].link;
        deallocSpace(&S->VH, temp);
        S->count--;
        return S->VH.datas[temp].elem;
    }
}

void display(Stack S) {
    while (S.top != -1) {
        printf("%c ", S.VH.datas[S.top].elem);
        S.top = S.VH.datas[S.top].link;
    }
}

void deallocSpace(virtualHeap *VH, int index) {
    if (index > -1 && index < MAX) {
        VH->datas[index].link = VH->avail;
        VH->avail = index;
    }
}

void makeNull(Stack *S) {
    while (S->top != -1) {
        int index = S->top;
        S->top = S->VH.datas[S->top].link;
        deallocSpace(&S->VH, index);
    }
    S->count = 0;
    S->top = -1;
}

char top(Stack S) {
    return S.VH.datas[S.top].elem;
}

#endif