#include <stdio.h>

typedef struct vote
{
    char *candidateName;
} Vote;

typedef struct user
{
    int id;
    char *name;
    Vote votes[2];
    void (*printVotes)(struct user);
} User;

void printVotes(User user)
{
    for (int i = 0; i < 2; i++)
    {
        printf("%s\n", user.votes[i].candidateName);
    }
}

int main()
{

    Vote vote1 = {.candidateName = "Emirhan"};
    Vote vote2 = {.candidateName = "Başkaİnsan"};

    User user;
    user.id = 0;
    user.name = "Zahid";
    user.votes[0] = vote1;
    user.votes[1] = vote2;
    user.printVotes = printVotes;

    user.printVotes(user);
    return 0;
}