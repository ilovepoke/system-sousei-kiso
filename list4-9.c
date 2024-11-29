#include <stdio.h>
#include<math.h>

int main()
{
    double a, b, c, D, x1, x2;
    
    printf("ax^2+bx+c=0\n");
    printf("What are a,b,c?:");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if(a == 0.0){
        if(b == 0){
            printf("No answer.\n");
        }
        else{
            x1 = -c / b;
            printf("x = %g\n", x1);
        }
    }
    else{
        D = b * b - 4 * a * c;
        if(D >= 0.0){
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);
            if(D == 0){
                printf("x = %g\n",x1);
            }
            else{
                printf("x = %g, %g\n", x1, x2);
            }
            }
        else{
            printf("No answer.\n");    
        }
    }
    

    return 0;
}