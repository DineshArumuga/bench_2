#include"header.h"

void add_node(SD **hptr)
{
	SD *temp,*last = *hptr;
	temp = (SD *)malloc (sizeof(SD));
	printf("Enter the student details\n");
	scanf("%s%d",temp->name,&temp->rollno);
	if(*hptr == 0)
	{
		temp->next = *hptr;
		*hptr = temp;
	}
	else
	{
		while(last->next != 0){
			last = last->next;
		}
		temp->next = last->next;
		last->next = temp;
	}
}
