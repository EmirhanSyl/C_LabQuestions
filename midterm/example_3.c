#include <stdio.h>

int main() {

    int a = 0;
    burayagit:
    a++;
    if (a < 10)
    {
        goto burayagit;
    }
    printf("%d\n", a);

    int number = 5;
    int test = 0;
    one:
        for (int i = 0; i < number; ++i)
        {
            test += i;
            goto two;
        }
    two:
        if (test > 5)
        {
            goto three;
        }

    three:
    printf("%d", test);


    for (int i = 0; i < 5; i++)
    {
        
    }
    
    return 0;
        
}