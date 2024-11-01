#include<limits.h>
#include<float.h>
#include<stdio.h>

int main(void)
{
	printf("double型の最大値:%g\n", DBL_MAX);
	printf("double型の最小値:%g\n", DBL_MIN);
	printf("double型の精度:%d\n", DBL_DIG);
	printf("int型の最大値:%d\n", INT_MAX);
	printf("int型の最小値:%d\n", INT_MIN);
	
	printf("\n");
	
	printf("floatの最大値:%g\n", FLT_MAX);
	printf("floatの最小値:%g\n",FLT_MIN);
	printf("floatの精度:%d\n", FLT_DIG);
	
	
	return 0;
}
