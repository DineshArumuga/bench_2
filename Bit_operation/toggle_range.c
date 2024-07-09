#include"header.h"

void toggle_range()
{
	int number,position1,position2,i;
	printf("Enter the any number\n");
	scanf("%d",&number);
	print_binary(number);
	printf("Enter the range of the postion\n");
	scanf("%d%d",&position1,&position2);
	for(i=position1;i<=position2;i++)
	{
		if(1&(number>>i))
		{
			number = number & (~(1<<i));
		}
		else
		{
			number = number | (1<<i);
		}
	}
	print_binary(number);
}
