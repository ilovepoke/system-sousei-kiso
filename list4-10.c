#include <stdio.h>
int main()
{
    int total;
    
    for(int i=1; i<=10; i++){
        total = total + i;
    }
    printf("The total is %d\n", total);

    return 0;
}