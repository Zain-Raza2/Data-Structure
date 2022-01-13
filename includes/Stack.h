#ifndef STACK_H
#define STACK_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int top;
    unsigned capacity;
    int* array;
};

struct Stack* createStack(unsigned capacity);

int isFull(struct Stack* stack);

int isEmpty(struct Stack* stack);

void push(struct Stack* stack, int item);

int pop(struct Stack* stack);

int peek(struct Stack* stack);

void printPush(struct Stack* stack, int item);

void  printPop(struct Stack* stack);

#endif