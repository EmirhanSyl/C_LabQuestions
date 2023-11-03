#include <stdio.h>
#define ABS(x) ((x) < 0 ? -x: x)
#define MAX(a,b) (a < b ? b : a)

int main() {
    printf("%d\n", ABS(-5));
    printf("%d\n", MAX(5, 3));
    return 0;
}