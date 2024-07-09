#include<stdio.h>
#include<stdlib.h>
#define max 5

int arr[max],flag=0,rear=0,front=0;

void enqueue(void);
void dequeue(void);
void display(void);

int main()
{
	int choose;
	void (*fp[3])(void) = {enqueue,dequeue,display};
	while(1)
	{
		printf("Choose the option\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n\n");
		scanf("%d",&choose);
		switch(choose)
		{
			case 1: fp[0]();
				break;
			case 2: fp[1]();
				break;
			case 3: fp[2]();
				break;
			case 4: printf("Program is terminated\nBYE BYE....\n\n");
				exit(0);
			default:printf("Enter the correct option\n");
				break;
		}
	}
}

void enqueue(void)
{
	if(flag && rear >= front)
	{
		printf("Enqueue is over flow\n");
		return;
	}

	int number;
	printf("Enter the data\n");
	scanf("%d",&number);

	arr[rear++] = number;

	printf("Data is inserted %d successfully\n",arr[rear-1]);
	if(rear == max)
	{
		flag = !flag;
		rear = 0;
	}
}

void dequeue(void)
{
	if((!flag) && front >= rear)
	{
		printf("Queue is empty\n");
		return;
	}

	printf("Deleted element = %d\n",arr[front]);
	arr[front++] = 0;
	if(front == max)
	{
		flag = !flag;
		front = 0;
	}
}

void display(void)
{
	int i;
	printf("Display = ");
	for(i=0;i<max;i++)
		printf("%d ",arr[i]);
	printf("\n\n");
}
