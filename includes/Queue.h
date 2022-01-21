#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Queue {
    unsigned capacity;
    int front;
    int rear;
    int* array;
};

struct Queue* createQueue(unsigned capacity);

int isQueueFull(struct Queue* queue);

int isQueueEmpty(struct Queue* queue);

void enQueue(struct Queue* queue, int item);

int deQueue(struct Queue* queue);

void printEnQueue(struct Queue* queue, int item);

void  printDeQueue(struct Queue* queue);

void testQueue(struct Queue* queue, int length, int rMax);

#endif