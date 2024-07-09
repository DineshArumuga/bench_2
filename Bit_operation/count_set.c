#include"header.h"

void count_set()
{
	int number,i,count=0;
	printf("Enter the any number\n");
	scanf("%d",&number);
	print_binary(number);
	for(i=31;i>=0;i--)
	{
		if(1&(number>>i))
			count++;
	}
	printf("\n\n****Count a set bit = %d  ****\n\n",count);
}
