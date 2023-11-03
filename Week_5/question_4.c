#include <stdio.h>
#define SIZE 4

int sum(int a, int b)
{
    return a + b;
}
int avg(int a, int b)
{
    return (a + b) / 2;
}

int divide(int a, int b)
{
    return a / b;
}
int multiply(int a, int b)
{
    return (a * b);
}

void* returnMinResult(int a, int b){
    int (*funcs[])(int, int) = {sum, avg, divide, multiply};
    int max = -1;
    int (*result)(int, int);
    for (int i = 0; i < SIZE; i++)
    {
        if (max < funcs[i](a, b))
        {
            max = funcs[i](a, b);
            result = funcs[i];
        }
    }

    printf("%p", result);
    return result;
}

int main() {
    int a = 5;
    int b = 3;

    printf("%d", (*returnMinResult)(a,b));
    return 0;
}