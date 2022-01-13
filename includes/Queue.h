#ifndef QUEUE_H
#define QUEUE_H

struct Queue {
    unsigned capacity;
    int* front;
    int* back;
    int* array;
};

struct Queue* createQueue(unsigned capacity);

void enQueeu(struct Stack* stack, int value);

void deQueue(struct Stack* stack, int value);

#endif