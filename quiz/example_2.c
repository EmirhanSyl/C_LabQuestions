#include <stdio.h>
#define MACRO(num, str)            \
    {                              \
        printf("%d", num);         \
        printf(" is");             \
        printf(" %s number", str); \
        printf("\n");              \
    }

struct str1
{
    char c;
    int i;
};

struct str2
{
    char c : 1;
    int i : 1;
}; // using structure packing

int main()
{
    MACRO(5, "Emirhan");
    printf("Size of str1: %d\n", sizeof(struct str1));
    printf("Size of str2: %d\n", sizeof(struct str2));
    return 0;
}