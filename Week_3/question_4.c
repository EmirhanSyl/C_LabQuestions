#include <stdio.h>

int main() {
    int var1;
    int var2;

    for (int *i= &var2; i <= &var1+10000; i++)
    {
        printf("%d", *i);
    }
    

    
    return 0;
}