#include <stdio.h>

int sum(int a, int b){
    return a+b;
}
int (*returnFunc())(){
    int(*func)(int,int);
    func = sum;
    return func;
}

int main() {
    printf("%d", (returnFunc())(3,5));
    return 0;
}