#include "Stack.h"
#include "Colors.h"

int main()
{
    struct Stack* stack = createStack(10);
    printPush(stack, 11);
    printPush(stack, 22);
    printPush(stack, 33);
    printPop(stack);
    printPop(stack);
    printPop(stack);
    return 0;
}