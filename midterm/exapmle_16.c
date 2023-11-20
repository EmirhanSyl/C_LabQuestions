#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}
int avg(int a, int b)
{
    return (a + b) / 2;
}

int (*ranaasim())()
{
    int (*functions[])(int, int) = {avg, sum};
    int a = 5;
    int b = 10;

    printf("%p\n", sum);
    printf("%p\n", avg);
    int min = functions[0](a, b);
    int (*address)(int, int) = functions[0];
    for (int i = 0; i < 2; i++)
    {
        if (min > functions[i](a, b))
        {
            min = functions[i](a, b);
            address = functions[i];
        }
    }

    printf("%p\n", address);

    return address;
}

int main() {

    printf("%d\n", (ranaasim())(5,10));
    return 0;
}