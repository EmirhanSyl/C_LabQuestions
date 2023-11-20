#include <stdio.h>

void add(int a, int b)
{
    printf("Addition is %d\n", a + b);
}
void multiply(int a, int b)
{
    printf("Multiplication is %d\n", a * b);
}
//tür (*dfjslf)(int, int)
int rana(void (*p1)(int, int), void (*p2)(int, int)){
    p1(5, 10);
    if (p1 == p2)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int *zahid(int *arr1, int *arr2){
    static int sumArray[5];

    for (int i = 0; i < 5; i++)
    {
        sumArray[i] = arr1[i] +arr2[i];
    }
    
    return sumArray;
}

int sum(int a, int b){
    return a+b;
}
int avg(int a, int b){
    return (a+b)/2;
}
int(*sare())(){
    int (*result)(int,int);
    result = sum;

    return result;
}

int (*asim(int a))(int,int)
{
    int (*result)(int, int);

    if (a < 5)
    {
        result = sum;
    }else{
        result = avg;
    }

    return result;
}

int main() {
    //printf("%d", rana(&add, &add));
    /*int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,4,5};

    int *sum = zahid(arr1, arr2);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(sum + i));
    }*/
    //printf("%d", (sare())(5,10));
    //printf("%d", (asim(5))(5,8));
    return 0;
}