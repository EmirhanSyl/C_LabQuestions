#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if (a != 0 && b != 0)
    {
        return a / b;
    }

    return -1;
}

int main() {
    int (*funcs[])(int,int) = {sum, subtract, multiply, divide};
    int numbers[] = {1,2,3,4};

    for (int i = 0; i < 4; i++)
    {
        printf("i: %d, result: %d\n", i + 1, funcs[i](numbers[i], 10));
    }
    
    
    return 0;
}