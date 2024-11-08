#include<stdio.h>

int main()
{
	int n,m;
	int sum;
	
	printf("Type two positive integer:");
	scanf("%d %d", &n, &m);
	
	sum = n + m;
	if (sum % 2 == 0 && sum % 3 == 0){
		printf("The sum is devided by both 2 and 3.");
		}
		
	else if(sum % 2 == 0){
		printf("The sum is devided by 2");
	}
	
	else if(sum % 3 == 0){
		printf("The sum is devided by 3");
	}
	
	
		
	else{
		printf("The sum is neither multiple of 2 nor 3.\n");
	}
	
	return 0;
}
