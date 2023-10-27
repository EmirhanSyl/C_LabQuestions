#include <stdio.h>

int swapAddress(int **a1, int **b1){
    int *temp = *a1;
     *a1 = *b1;
     *b1 = temp;

    return 0;
}

int main() {

    int a = 10;
    int b = 5;

    int *p1 = &a;
    int *p2 = &b;

    swapAddress(&p1, &p2);

    printf("p1 = %d, p2= %d", *p1, *p2);
    return 0;
}