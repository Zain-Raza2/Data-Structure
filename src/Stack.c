#include "Stack.h"
#include "Colors.h"

struct Stack* createStack(unsigned capacity)
{
     struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
     stack->capacity = capacity;
     stack->top = -1;
     stack->array = (int*)malloc(stack->capacity * sizeof(int));
     return stack;
}

int isFull(struct Stack* stack)
{
    return stack->top == stack->capacity - 1;
}

int isEmpty(struct Stack* stack)
{
    return stack->top == -1;
}

void push(struct Stack* stack, int item)
{
    if (isFull(stack))
    return;
    stack->array[++stack->top] = item;
}

int pop(struct Stack* stack)
{
    if (isEmpty(stack))
    return INT_MIN;
    return stack->array[stack->top--];
}

void printPush(struct Stack* stack, int item)
{
    push(stack, item);
    printf(KGRN "%d pushed to stack\n", item);
}

void  printPop(struct Stack* stack)
{
    printf(KRED "%d popped from stack\n", pop(stack));
}

void testStack(struct Stack* stack, int stackLength, int rMax)
{
    for (int i = 0; i < stackLength; i++) {
        int rint = rand();
        printPush(stack, rint % rMax);
    } for (int i = 0; i < stackLength; i++) {
        printPop(stack);
    }
}