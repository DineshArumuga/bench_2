#include"header.h"

void set_or_not()
{
	int number,position;
	printf("Enter the any number\n");
	scanf("%d",&number);
	print_binary(number);
	printf("Enter the any position\n");
	scanf("%d",&position);
	if(1&(number>>position))
	{
		printf("\n****Set a bit****\n\n");
	}
	else
	{
		printf("\n****Clear a bit****\n\n");
	}
}
