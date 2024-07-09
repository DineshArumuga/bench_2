#include"header.h"

void asscending_order(SD *hptr)
{
	int i,j,count = count_node(hptr);
	SD *temp,*sample = (SD *)malloc(sizeof(SD));
	for(i=0;i<count-1;i++)
	{
		temp = hptr->next;
		for(j=0;j<=count-1-i;j++)
		{
			if((hptr->rollno)>(temp->rollno))
			{
				strcpy(sample->name,temp->name);
				sample->rollno = temp->rollno;
				temp->rollno = hptr->rollno;
				strcpy(temp->name,hptr->name);
				hptr->rollno = sample->rollno;
				strcpy(hptr->name,sample->name);
			}
			if(temp->next != 0)
			temp = temp->next;
		}
		if(hptr->next != 0)
			hptr = hptr->next;
	}
}

