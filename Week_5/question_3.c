#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}
int avg(int a, int b){
    return (a+b) / 2;
}

int (*returnFunc(int number))()
{
    int (*func)(int, int);

    if (number < 5)
    {
        func = sum;
    }
    else
    {
        func = avg;
    }
    return func;
}

int main()
{
    printf("%d", (returnFunc(6))(3, 5));
    return 0;
}