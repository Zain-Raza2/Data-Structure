#include "Queue.h"
#include "Colors.h"

struct Queue* createQueue(unsigned capacity)
{
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->capacity = capacity;
    queue->front = -1;
    queue->rear = -1;  
    queue->array = (int*)malloc(queue->capacity * sizeof(int));
    return queue;
}

int isQueueFull(struct Queue* queue)
{
    if (queue->rear == queue->capacity -1)
        return 1;
    else 
        return 0;
}

int isQueueEmpty(struct Queue* queue)
{
    if (queue->rear == queue->front)
        return 1;
    else
        return 0;
}

void enQueue(struct Queue* queue, int item)
{
    if (isQueueFull(queue)) {
        printf("Queue overflow, queue is full \n");
		return;
    } else { 
        queue->array[++queue->rear] = item;
    }
}

int deQueue(struct Queue* queue)
{ 
    if (isQueueEmpty(queue)) {
        printf("Queue underflow, queue is empty \n");
        return INT_MIN;
    } else {
        int deQueuedInt = queue->array[0];
        for (int i = 0; i < queue->rear-1; i++) {
            queue->array[i] = queue->array[i+1];
        }
        queue->rear--;
        return deQueuedInt;
    }
}

void printEnQueue(struct Queue* queue, int item)
{
    enQueue(queue, item);
    printf(KGRN "%d queued to queue\n", item);
}

void  printDeQueue(struct Queue* queue)
{
    printf(KRED "%d dequeued from queue\n", deQueue(queue));
}

void testQueue(struct Queue* queue, int length, int rMax)
{
    for (int i = 0; i < length; i++) {
        int rint = rand();
        printEnQueue(queue, rint % rMax);
    } for (int i = 0; i < length; i++) {
        printDeQueue(queue);
    }
}