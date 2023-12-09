#include <stdio.h>
#include <stdlib.h>

typedef struct Book
{
    char *title;
    char *author;
    int price;
} Book;

int main()
{
    Book b1 = {.title = "A", .author = "R", .price = 100};
    Book b2 = {.title = "B", .author = "S", .price = 200};
    Book b3 = {.title = "C", .author = "B", .price = 300};

    Book arr[] = {b1, b2, b3};

    int maxPrice = arr[0].price;
    int maxIndex = 0;
    for (int i = 0; i < 3; i++)
    {
        if (maxPrice < arr[i].price)
        {
            maxPrice = arr[i].price;
            maxIndex = i;
        }
    }

    printf("Title of the highest price's book : %s\n", arr[maxIndex].title);
    printf("Author of the highest price's book : %s\n", arr[maxIndex].author);
    printf("Price of the highest price's book : %d\n", arr[maxIndex].price);
    return 0;
}