#include <stdio.h>
#include <stdlib.h>
#define PI 3.14


int main() {
    
    printf("%f\n", PI);
    #ifdef PI
    #undef PI
    #endif

    #ifndef PI
    #define PI 123
    #endif

    #if 5 < 2
    printf("%d\n", PI);
    #else
    printf("%d\n", PI);
#endif
    return 0;
}