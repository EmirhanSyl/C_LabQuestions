#include <stdio.h>

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