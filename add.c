#include <stdio.h>

int main()
{
    int mangos, pineapples, fruits;
    
    printf("How many mangos do you have?");
    scanf("%d", &mangos);
    
    printf("How many pineapples do you have?");
    scanf("%d", &pineapples);
    
    fruits = mangos + pineapples;
    
    printf("You have %d fruits in total.\n", fruits);

    return 0;
}
