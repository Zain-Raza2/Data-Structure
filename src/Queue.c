#include "Stack.h"
#include "Colors.h"

struct Queue* createQueue(unsigned capacity)
{
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue))
    queue->capacity = capacity;
    queue->front = -1
    queue->rear = -1    
    queue->array = (int*)malloc(stack->capacity * sizeof(int));
}

int isFull(struct queue* queue)
{
    if (queue->rear == queue->capacity -1)
        return 1;
    else 
        return 0;
}

int isEmpty(struct queue* queue)
{
    if (queue->rear == queue->front)
        return 1;
    else
        return 0;
}

void enQueue(struct Stack* stack, int value)
{

}

void deQueue(struct Stack* stack, int value)
{

}


