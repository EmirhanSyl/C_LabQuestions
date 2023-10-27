#include <stdio.h>

int sum(int a, int b){
    return a+b;
}

int subtract(int a, int b)
{
    return a-b;
}

int multiply(int a, int b)
{
    return a*b;
}

int divide(int a, int b)
{
    if (a != 0 && b != 0)
    {
        return a/b;
    }
    
    return -1;
}

int makeOperations(int a, int b, int (*operation)(int,int)){
    return operation(a, b);
}

int main() {

    int a = 5;
    int b = 10;

    printf("Sum: %d\n", makeOperations(a, b, sum));
    return 0;
}