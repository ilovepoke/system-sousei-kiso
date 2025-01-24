#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int total = 0;
    int remaining = 20;
    int intelligence, stamina, charisma;
    
    
    srand(time(0));
    intelligence = (rand() % 20) + 1;
    remaining -= intelligence;
    
    stamina = (rand() % remaining) + 1;
    remaining -= stamina;
    
    charisma = remaining;
    
    total = intelligence + stamina + charisma;
    if(total != 20){
        printf("Erro in attributeassignment: the total is %d.\n", total);
    }
    
    if(intelligence > stamina && intelligence > charisma){
        printf("CLASS:mage\n");
        printf("STATS: ");
        printf("Intelligence\tStamina\tCharisma\n");
        printf("\t%d\t\t%d\t%d", intelligence, stamina, charisma);
    }
    else if(stamina > intelligence && stamina > charisma){
        printf("CLASS:knight\n");
        printf("STATS: ");
        printf("Intelligence\tStamina\tCharisma\n");
        printf("\t%d\t\t%d\t%d", intelligence, stamina, charisma);
    }
    else if(charisma > intelligence && charisma > stamina){
        printf("CLASS:thief\n");
        printf("STATS: ");
        printf("Intelligence\tStamina\tCharisma\n");
        printf("\t%d\t\t%d\t%d", intelligence, stamina, charisma);
    }
	
	printf("\n");

    return 0;
}