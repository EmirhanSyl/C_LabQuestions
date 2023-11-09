#include <stdio.h>
#include <stdlib.h>

typedef struct reservation
{
    int id;
    int isReserved;
} Reservation;

typedef struct person
{
    int id;
    char *name;
    Reservation *reservation;
    void (*reserve)(Reservation *, struct person *);
} Person;

void reserve(Reservation *reservation, struct person *person)
{
    if (reservation->isReserved == 1)
    {
        printf("Dolu\n");
    }else{
        reservation->isReserved = 1;
        person->reservation = reservation;
        printf("Rezerve Edildi\n");
    }
    
}

int main()
{
    Reservation reservation1;
    reservation1.id = 0;
    reservation1.isReserved = 0;

    Person person1;

    person1.id = 0;
    person1.name = "Sare";
    person1.reserve = reserve;

    person1.reserve(&reservation1, &person1);
    
    printf("%d\n", person1.reservation->isReserved);
    return 0;
}