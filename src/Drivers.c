#include <time.h>
#include <stdlib.h>

#include "Stack.h"
#include "Queue.h"

#include "Colors.h"


int main()
{
    srand(time(NULL));

    // Test Stacks
    // struct Stack* stack = createStack(5);
    // testStack(stack, 5, 100);

    // Test Queue
    struct Queue* queue = createQueue(4);
    printEnQueue(queue,10);
    printEnQueue(queue, 20);
    printEnQueue(queue, 30);

    printDeQueue(queue);
    printDeQueue(queue);
    printDeQueue(queue);

    return 0;
}
