#include <stdio.h>
#include <stdlib.h>


/*
    Write a Person struct(name, surname). 
    Then, create a person struct array. 
    Finally write person names to the file line by line (fwrite() )
*/

const int *a;
int *func(){}
double (*funcP)(int, int);

struct Person{
    char *name;
    char *surname;
};

int main()
{
    struct Person p1 = {"Emirhan", "Soylu"};
    struct Person p2 = {"Sare", "Bayram"};
    struct Person p3 = {"Zahid", "Baltaci"};
    struct Person p4 = {"Rana", "Güngör"};

    struct Person people[4] = {p1, p2, p3, p4};

    FILE *file = fopen("names.txt", "w");
    FILE *bin = fopen("names.bin", "wb");
    for (int i = 0; i < 4; i++)
    {
        fprintf(file, "%s %s\n", people[i].name, people[i].surname);

        fwrite(&people[i], sizeof(struct Person), 1, bin);
    }
    fclose(bin);

    FILE *read_bin = fopen("names.bin", "rb");
    struct Person *read_person = malloc(sizeof(struct Person));
    int randomIndex = 3;
    int personCount = 0;
    while (fread(read_person, sizeof(struct Person), 1, read_bin) != 0)
    {
        if (personCount == randomIndex)
        {
            printf("%s %s", read_person->name, read_person->surname);
        }
        personCount++;
        
    }

    return 0;
}
