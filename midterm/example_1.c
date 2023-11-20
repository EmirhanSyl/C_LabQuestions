#include <stdio.h>
#include <stdbool.h>

int boolean = 0;
bool isIncluded = false;
void changeValue(){
    static int id = 10; //2. çağırışında atlar
    if (5)
    {
        id++;
    }
    
    
    printf("%d\n", id);
}

int main() {
    int a = 10;
    int b;

    int a = (5 == 5) + 12;
    changeValue();
    changeValue();
    changeValue();
    
    return 0;
}