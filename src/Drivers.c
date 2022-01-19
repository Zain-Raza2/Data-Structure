#include <time.h>
#include <stdlib.h>

#include "Stack.h"
#include "Queue.h"

#include "Colors.h"


int main()
{
    srand(time(NULL));

    // Test Stacks
    struct Stack* stack = createStack(4);
    testStack(stack, 5, 100);

    // Test Queue
    // struct Queue* queue = createQueue();

    return 0;
}
