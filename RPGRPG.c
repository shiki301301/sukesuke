#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int intelligence, stamina, charisma;
    int B = 20; 
    int A = B; 
    intelligence = (rand() % (A - 2)) + 1;
    A -= intelligence;
    stamina = (rand() % (A - 1)) + 1; 
    A -= stamina;
    charisma = A;
    char *class;
    if (intelligence >= stamina & intelligence >= charisma)
    {
        class = "Mage";
    }
    else if (stamina >= intelligence & stamina >= charisma)
    {
        class = "Knight";
    }
    else
    {
        class = "Thief";
    }
    printf("Intelligence: %d\n", intelligence);
    printf("Stamina: %d\n", stamina);
    printf("Charisma: %d\n", charisma);
    printf("Class: %s\n", class);
    return 0;
}