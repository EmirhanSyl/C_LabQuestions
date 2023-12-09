#include <stdio.h>
#include <stdlib.h>

typedef enum unionType
{
    INTEGER,
    DOUBLE,
} unionType;

typedef union Uni
{
    float y;
    int x;
}
Uni;

typedef union myunion
{
    int a;
    double b;
} myunion;

typedef struct mystruct
{
    unionType uniontype;
    myunion numbers;
} mystruct;

int main() {

    myunion mu1;
    mu1.a = 5;

    myunion mu2;
    mu2.b = 3.5;

    mystruct m1 = {.numbers = mu1, .uniontype = INTEGER};
    mystruct m2 = {.numbers = mu2, .uniontype = DOUBLE};

    if (m1.uniontype == INTEGER){
        printf("Int tutyo");
    }
    
    return 0;
}