#include"header.h"


int main()
{
	SD *hptr = NULL;
	int choose,count;
	while(1) {
		printf("Choose the opeartion for Single Linked List\n1.Add the linked list\n2.Display\n3.Count the node\n4.Asscending_order\n5.Reverse data\n9.exit\n");
		scanf(" %d",&choose);
		switch(choose)
		{
			case 1: add_node(&hptr);
				break;
			case 2: print(hptr);
				break;
			case 3: count = count_node(hptr);
				break;
			case 4: asscending_order(hptr);
				break;
			case 5: reverse_data(hptr);
				break;
			case 9: goto exit;
				break;
			default:
				printf("Choose correct option in below\n");
		}
	}
exit: 	printf("Program is terminated\nBYE BYE ....!\n");
}
