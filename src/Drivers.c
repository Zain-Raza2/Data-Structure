#include "Stack.h"
#include "Colors.h"
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    struct Stack* stack = createStack(1);
    testStack(stack, 5, 100);
    return 0;
}
