#include <stdio.h>
#include <stdlib.h>

/*
    arr = {1, 2, 3, 4, 5, 6}, index = 4

    newArr = {1, 2, 3, 4, 5, 6, 5}
*/

int *shift_right(int *arr, int size, int index)
{
    arr = (int *)realloc(arr, sizeof(int) * (size + 1));
    arr[size] = arr[index];

    return arr;
}

/*
    arr = {1, 2, 3, 4, 5, 6}, number = 4

    newArr = {1, 2, 3, 0, 5, 6, 0}
*/
int *shift_right_v2(int *arr, int size, int number)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            arr = (int *)realloc(arr, sizeof(int) * (size + 1));
            arr[size] = number;
            arr[i] = 0;
        }
    }

    return arr;
}

/*
    arr = {1, 2, 3, 4, 5, 6}, size = 6, index = 1, distance = 8

    newArr = {1, 2, 3, 4, 5, 6, 0, 0, 1}
*/

int *shift_right_v3(int *arr, int size, int index, int distance)
{
    if (index + distance < size)
    {
        arr[index + distance] = arr[index];
    }else{
        arr = realloc(arr, sizeof(int) * (index + distance + 1));
        arr[index + distance] = arr[index];

        /*int lastElement = distance + index;
        for (int i = 0; size < lastElement--; i++)
        {
            arr[size + i] = 0;
        }*/
    }

    return arr;
}

/*
    arr = {1, 2, 3, 4, 5, 6}, size = 6, left = 0,  right = 3, distance = 1

    newArr = {1, 2, 3, 4, 5, 3, 4, 5}

    1- Arrayi genişletmek gerekiyor mu kontrol et
    2- eğer gerekmiyorsa verilen aralıktaki elemanları yeni indekslerine taşı

    3- eğer gerekiyorsa arrayi sağdaki elemanın yeni indeksi +1 olacak kadar genişlet
    4- verilen aralıktaki elemanları yeni indekslerine taşı
*/

int *shift_right_v3(int *arr, int size, int left, int right, int distance){
    if (right + distance >= size)
    {
        arr = realloc(arr, sizeof(int) * (right + distance + 1));
    }

    for (int i = 0; i < right - left + 1; i++)
    {
        arr[right +distance - i] = arr[right - i];
    }

    for (int i = right; i >= left; i--)
    {
        arr[i + distance] = arr[i];
    }
}

int main()
{
    int *arr = calloc(6, sizeof(int));
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    arr[5] = 6;

    // int *newArr = shift_right(arr, 6, 4);
    int *newArr = shift_right_v3(arr, 6, 4, 3);

    for (int i = 0; i < 8; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}
