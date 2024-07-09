#include"header.h"

void set_last_bit()
{
	int number,i;
	printf("Enter the any number\n");
	scanf("%d",&number);
	print_binary(number);
	for(i=31;i>=0;i--)
	{
		if(!(1&(number>>i)))
		{
			number = number | (1<<i);
			break;
		}
	}
	print_binary(number);
}
