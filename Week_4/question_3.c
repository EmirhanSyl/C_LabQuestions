#include <stdio.h>

int sumNumbers(int a, int b){
    return a+b;
}

int main() {

    int (*sum)(int, int);

    sum = sumNumbers;
    printf("%d", sum(5,8));
    return 0;
}