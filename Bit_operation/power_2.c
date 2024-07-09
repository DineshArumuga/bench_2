#include"header.h"

void power_2()
{
	int number;
	printf("Enter the any number\n");
	scanf("%d",&number);
	if(number&(number-1))
		printf("\n\n****Number is Not a power of 2****\n\n");
	else
		printf("\n\n****Number is power of 2****\n\n");
}
