#include"header.h"
void toggle_bit()
{
	int number,position;
	printf("Enter the any number\n");
	scanf("%d",&number);
	print_binary(number);
	printf("Enter the any position\n");
	scanf("%d",&position);
	if(1&(number>>position))
	{
		number = number & (~(1<<position));
	}
	else
	{
		number = number | (1<<position);
	}
	print_binary(number);

}
