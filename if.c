#include <stdio.h>

int main()
{
    int age, guess;
    
    age = 32;
    
    printf("Guess my age:");
    scanf("%d", &guess);
    
    if(guess <= 27 ){
        printf("The age is older than 27.");
    }
    
    if(guess >= 37){
        printf("The age is younger than 37.");
    }
    
    if(guess < 37 && guess > 27 && guess != age){
        printf("Your guess is really close!!!");
    }
    
    if(guess == age){
        printf("Your guess is succeeded!");
    }
    
    return 0;
}