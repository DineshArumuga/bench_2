#include"header.h"

void print_binary(int number)
{
	int i;
	printf("\n***************Printing Binary Format**************\n");
	for(i = 31;i>=0;i--)
	{
		printf("%d ",1&(number>>i));
	}
	printf("\n\n");
}
