#include <stdio.h>
#include <stdlib.h>

int Asim()
{
    int arr[5] = {1, 2, 3, 4, 5};

    void *vp1 = malloc(sizeof(int));
    void *vp2 = (int *)(&arr[4]);
    int *ptr1 = arr;
    vp1 = ++ptr1;

    for (int i = 0; vp1 != vp2; i++)
    {
        printf("vp1: %p vp2: %p\n", (int *)vp1, (int *)vp2);
        //printf("-");
        vp2 -= sizeof(int);
    }
    
    
    return 0;
}

int sare()
{
    int arr[5] = {1, 2, 3, 4, 5};

    void *vp1 = malloc(sizeof(int));
    void *vp2 = (int *)(arr + 3);
    int *ptr1 = arr;
    ptr1 += 3;
    vp1 = arr+1;
    vp1++;

    if (++vp1 == ptr1)
    {
        vp2 = NULL;
    }
    

    if (vp2 == vp1)
    {
        printf("Pointer to Array Name and First Element "
               "are Equal.");
    }
    else
    {
        printf("Pointer to Array Name and First Element "
               "are not Equal.");
    }
    return 0;
}

int rana()
{
    int arr[5] = {1,2,3,4,5};

    void *vp1 = malloc(sizeof(int));
    int *ptr1 = arr;
    int *ptr2 = (arr + 5);

    vp1 = ptr1;
    if (--vp1 == ptr2)
    {
        printf("Pointer to Array Name and First Element "
               "are Equal.");
    }
    else
    {
        printf("Pointer to Array Name and First Element "
               "are not Equal.");
    }
    return 0;
}

int zahid()
{
    
    int arr[5] = {1, 2, 3, 4, 5};

    int *ptr1 = arr;

    int *ptr2 = &arr[2];
    printf("%d\n", arr);
    if (ptr1 == arr)
    {
        printf("Pointer to Array Name and First Element "
               "are Equal.");
    }
    else
    {
        printf("Pointer to Array Name and First Element "
               "are not Equal.");
    }
    return 0;
}

int main()
{
    //zahid();
    //rana();
    //sare();
    Asim();
    return 0;
}