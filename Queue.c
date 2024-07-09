#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define max 5
int front=0,rear=0;
int arr[max];

void enqueue();
void dequeue();
void display();

int main()
{
	int choose;
	while(1)
	{
		printf("Choose the option\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n\n");
		scanf("%d",&choose);
		switch(choose)
		{
			case 1: enqueue();
				break;
			case 2: dequeue();
				break;
			case 3: display();
				break;
			case 4: printf("The program is terminated\nBYE BYE....\n");
				exit(0);
			default:printf("Please choose the correct option\n");
				break;
		}
	}
}

void enqueue()
{
	if(rear == max)
	{
		printf("Queue is over flow\n");
		return;
	}
	int number;
	printf("Enter the insert element for queue\n");
	scanf("%d",&number);
	arr[rear++] = number;
}


void dequeue()
{
	if((front == rear) || (rear == 0))
	{
		printf("Queue is empty\n");
		return;
	}
	
	printf("Removed the data = %d\n",arr[front]);
	arr[front++] = 0;
}

void display()
{
	int i;
	printf("Display = ");
	for(i=0;i<max;i++)
		printf("%d ",arr[i]);
	printf("\n\n");
}
