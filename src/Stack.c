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

int isStackFull(struct Stack* stack)
{
    if (stack->top == stack->capacity - 1)
        return 1;
    else 
        return 0;
}

int isStackEmpty(struct Stack* stack)
{
    if (stack->top == -1)
        return 1;
    else
        return 0;
}

void push(struct Stack* stack, int item)
{
    if (isStackFull(stack)) {
        printf("Stack Overflow, stack is full. \n");
        return;
    } else {
        stack->array[++stack->top] = item;        
    }
}

int pop(struct Stack* stack)
{
    if (isStackEmpty(stack)) {
        printf("Stack Underflow, stack is empty.\n");
        return INT_MIN;
    } else {
        return stack->array[stack->top--];
    }
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

void testStack(struct Stack* stack, int length, int rMax)
{
    for (int i = 0; i < length; i++) {
        int rint = rand();
        printPush(stack, rint % rMax);
    } for (int i = 0; i < length; i++) {
        printPop(stack);
    }
}
