#include <stdio.h>

void add(int a, int b)
{
    printf("Addition is %d\n", a + b);
}
void subtract(int a, int b)
{
    printf("Subtraction is %d\n", a - b);
}
void multiply(int a, int b)
{
    printf("Multiplication is %d\n", a * b);
}
void divide(int a, int b)
{
    printf("division is %d\n", a / b);
}

int main()
{
    //tür (*isim)(parametre türleri int,double)
    void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply, divide};
    int ch, a = 15, b = 10;

    printf("Enter Choice: 0 for add, 1 for subtract, 2 for multiply and 3 for divide\n");
    scanf("%d", &ch);
    if (ch > 3){
        return 0;
    }

    fun_ptr_arr[ch](a, b);
    return 0;
}