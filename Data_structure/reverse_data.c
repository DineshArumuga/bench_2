#include"header.h"

void reverse_data(SD *hptr)
{
	int i,j,count = count_node(hptr);
	SD *temp = hptr,*last = hptr,*sample = (SD *)malloc(sizeof(SD));
	for(i=0;i<(count/2);i++)
	{
		temp = last;
		for(j=0;j<count-1-i;j++)
		{
			temp = temp->next;
		}
		sample->rollno = temp->rollno;
		strcpy(sample->name,temp->name);
		temp->rollno = hptr->rollno;
		strcpy(temp->name,hptr->name);
		hptr->rollno = sample->rollno;
		strcpy(hptr->name,sample->name);	
	hptr = hptr->next;	
	}

}
