#include <stdio.h>

int swapValues(int *a, int *b){
    int *temp = &a;
    a = &b;
    b = &temp;

}

int main() {

    int a = 5;
    int b = 10;
    
    swapValues(&a, &b);
    

    printf("a = %d, b= %d \n", a, b);
    return 0;
}