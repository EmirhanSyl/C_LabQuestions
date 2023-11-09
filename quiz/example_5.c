#include <stdio.h>
#include <stdlib.h>

typedef struct appointment
{
    int price;
} Appointment;

typedef struct patient
{

    char *name;
    int balance;
    Appointment *appointments;
    int appNum;

    void (*booking)(Appointment*, struct patient);
} Patient;

void booking(Appointment *apo, struct patient pati)
{
    if (apo->price <= pati.balance)
    {
        pati.appointments[pati.appNum] = *apo;
        pati.appNum+=1;
        printf("Randevu Alindi!\n");
    }
    else
    {
        printf("Randevu Alinamadi!!!\n");
    }
}

int main()
{

    Patient patient1;
    patient1.name = "BraveryBreaker";
    patient1.balance = 1000;
    patient1.appNum = 0;
    patient1.appointments = malloc(sizeof(Appointment));
    patient1.booking = booking;

    Appointment appointment1 = {100};
    Appointment appointment2 = {10000};
    patient1.booking(&appointment1, patient1);
    patient1.booking(&appointment2, patient1);

    printf("%d\n", patient1.appointments[patient1.appNum].price);
    printf("%d", patient1.appNum);
    return 0;
}