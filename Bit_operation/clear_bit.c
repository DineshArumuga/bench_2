#include"header.h"
void clear_bit()
{	
	int number,position;
	printf("Enter the any number\n");
	scanf("%d",&number);
	print_binary(number);
	printf("Enter the any position\n");
	scanf("%d",&position);
	number = number&(~(1<<position));
	print_binary(number);
}
