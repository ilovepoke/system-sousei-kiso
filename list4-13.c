#include <stdio.h>
#include<math.h>

int main()
{
    int i=1;
    
    printf("\treciprocal\tsqure\troot\n");
    printf("-------------------------------------\n");
    
    while(i <= 10){
        double value = i;
        double a = 1 / value;
        double b = value * value;
        double c = sqrt(value);
        printf("%5.1f\t\t%5.3f\t%6.1f\t%6.4f\n", value, a, b, c);
        i = i + 1;
    }

    return 0;
}