#include"header.h"

void odd_even()
{
	int number;
	printf("Enter the any number\n");
	scanf("%d",&number);
	if(number&1)
		printf("\n\n****ODD Number****\n\n");
	else
		printf("\n\n****Even Number****\n\n");
}
