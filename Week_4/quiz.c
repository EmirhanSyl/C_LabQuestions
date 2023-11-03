#include <stdio.h>

void first(){
    printf("Hello, World!\n");
}

int main() {
    void (*p)() = first;
    p++;
    p();
    return 0;
}