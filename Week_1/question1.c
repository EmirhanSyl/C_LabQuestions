#include <stdio.h>

// Take int values from console until user enters '-1'. Then, sum all given numbers and print it
int main(){
    int i;
    int total = 0;
    
    do
    {
        printf("Enter A Number: ");
        scanf("%d", &i);
        total += i;
    } while (i != -1);
    total++;
    printf("-1 Entered! Total is: %d", total);
    return 0;
}