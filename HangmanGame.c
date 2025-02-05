#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void displayMenu(){
    printf("\n*****    Hangman Game Menu    ******\n");
    printf("***\t1. Start New Game        ***\n");
    printf("***\t2. Need a hint?          ***\n");
    printf("*** \t3. Exit                  ***\n");
    printf("************************************\n");
    printf("Choose an option: ");
}

void displayHint(){
    printf("\nThe category of the word is 'FRUITS'.\n");
    printf("Do you best!!\n\n");
}

void displayHangman(int attempts){
    switch (attempts){
        case 0:
            printf("＼　ヽ　　｜　/　　／\n   ＼　ヽ　｜　/　 ／\nー　＿人人 人人＿　ー\nー　＞　bangggg   ＜　ー\nー　 ￣Y^Y^Y^Y￣　ー\n  　／　/　｜　ヽ　＼\n  ／　　/　 |   ヽ　 ＼\n");
            break;
        case 1:
            printf("~*●\n");
            break;
        case 2:
            printf("-~*●\n");
            break;
        case 3:
            printf("--~*●\n");
            break;
        case 4:
            printf("---~*●\n");
            break;
        case 5:
            printf("----~*●\n");
            break;
        case 6:
            printf("-----~●\n");
            break;
        case 7:
            printf("------~●\n");
            break;
        case 8:
            printf("-------~●\n");
            break;
        case 9:
            printf("--------~●\n");
            break;
        case 10:
            printf("---------~●\n");
            break;
    }
}

void startNewGame(){
    char* words[] = {"apple", "banana", "lemon", "grape", "kiwi", "peach", "orange", "cherry", "pear", "pineapple", "mango"};
    int numWords = sizeof(words) / sizeof(words[0]);
    srand(time(NULL));
    int wordIndex = rand() % numWords;
    char* word = words[wordIndex];
    char guess;
    int i;
    int correctGuesses = 0;
    int wordLength = strlen(word);
    char guessed[wordLength + 1];
    int attempts = 10;
    int alreadyGuessed[256] = {0};
    
    for(i=0; i < wordLength; i++){
        guessed[i] = '_';
    }
    guessed[wordLength] = '\0';
    
    printf("\nWelcome to Hangman!\n");
    
    while (attempts > 0 && correctGuesses < wordLength){
        printf("\nWord: %s\n", guessed);
        printf("Attempts remaining: %d\n", attempts);
        displayHangman(attempts);
        printf("Enter your guess: ");
        scanf(" %c", &guess);
        
        if(!isalpha(guess)){
            printf("Please enter a valid letter.\n");
            continue;
        }
        
        guess = tolower(guess);
        
        if(alreadyGuessed[(int)guess]){
            printf("You've already guessed '%c'. Try a different letter.\n", guess);
            continue;
        }
        
        alreadyGuessed[(int)guess] = 1;
        
        int found = 0;
        for(i=0; i < wordLength; i++){
            if(tolower(word[i]) == guess){
                if(guessed[i] == '_'){
                    guessed[i] = word[i];
                    correctGuesses++;
                    found = 1;
                }
            }
        }
        if(!found){
            attempts--;
            printf("Wrong guess!\n");
        }
    }
    if (correctGuesses == wordLength){
        printf("\nCongratulations! You've guessed the word: %s\n", word);
    }
    else{
        displayHangman(attempts);
        printf("\nGame Over! The word was: %s", word);
    }
}

int main(){
    int option;
    char replay;    
    
    while (1){
        displayMenu();
        scanf("%d", &option);
        
        switch(option){
            case 1:
                startNewGame();
                break;
            case 2:
                displayHint();
                break;
            case 3:
                printf("Exiting game. See you!\n");
                return 0;
            default:
                printf("Invalid option. Please try again.\n");
                break;
        }
        printf("\nDo you wanna play? (y/n): ");
        scanf(" %c", &replay);
        
        if(replay == 'n' || replay == 'N'){
            printf("\nExiting game. See you again!\n");
            break;
        }
    }
    return 0;
}

