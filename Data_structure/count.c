#include"header.h"

int count_node(SD *ptr)
{
	int count = 0;
	while(ptr != 0)
	{
		ptr = ptr->next;
		count++;
	}
	printf("Total node = %d\n",count);
	return count;
}
