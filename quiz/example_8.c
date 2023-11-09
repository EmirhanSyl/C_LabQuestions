#include <stdio.h>

typedef union numbers
{
    int x;
    double y;
    int z;
    char c;
}Numbers;

int main()
{
    Numbers number;
    number.x = 10;
    printf("%d %f %d %c\n", number.x, number.y, number.z, number.c);
    number.y = 5.0;
    printf("%d %f %d %c\n", number.x, number.y, number.z, number.c);
    number.c = 'a';
    printf("%d %f %d %c", number.x, number.y, number.z, number.c);
    return 0;
}