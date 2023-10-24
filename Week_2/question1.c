#include <stdio.h>

int main() {

    int i = 5;
    float f = 5.3;
    double d = 7.6;
    long l = 4564656547;

    printf("Total byte of float + int = %d", sizeof(f + i) );

    printf("\n Total byte of float + double = %d", sizeof(f + d) );

    printf("\n Total byte of double + int = %d", sizeof(d + i) );

    printf("\n Total byte of float + double + int = %d", sizeof(f + d + i) );

    printf("\n Total byte of long + double + int = %d", sizeof(l + d + i) );
    return 0;
}