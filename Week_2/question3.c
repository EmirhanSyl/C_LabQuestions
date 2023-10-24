#include <stdio.h>
#include <stdbool.h>


int CountOfTrue(bool condition){
    static int trueCount = 0;
    trueCount = (condition) ?  trueCount + 1 : trueCount;
    return trueCount;
}

int main() {
    int count = 0;
    CountOfTrue(true);
    CountOfTrue(false);
    CountOfTrue(true);
    count = CountOfTrue(true);

    printf("True Count = %d", count);
    return 0;
}