#include"header.h"

void print(SD *ptr)
{
	printf("*********DISPLAY DETAILS **********\n");
	while(ptr != NULL)
	{
		printf("Roll No  : %d\t\tName :%s\n",ptr->rollno,ptr->name);
		ptr = ptr->next;
	}
	printf("\n");
}
