#include"header.h"

void swap_data()
{
	int number,position1,position2,i,j,data1,data2;
	printf("Enter the any number\n");
	scanf("%d",&number);
	print_binary(number);
	printf("Enter the any position range\n");
	scanf("%d%d",&position1,&position2);
	for(i=position1,j=position2;i<j;i++,j--)
	{
		data1 = 1&(number>>i);
		data2 = 1&(number>>j);
		if(data1!=data2)
		{
			if(data1)
				number = number & (~(1<<i));
			else
				number = number | (1<<i);
			if(data2)
				number = number & (~(1<<j));
			else
				number = number | (1<<j);
		}
	}
	print_binary(number);
}
