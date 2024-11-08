#include <stdio.h>

int main()
{
    int diff;
    char small;
    char large;
    
    printf("Type an alphabet in lower case:");
    scanf("%c", &small);
    diff = 'a' - 'A';
    large = small - diff;
    
    printf("Lower case is %c; upper case is %c", small, large);

    return 0;
}