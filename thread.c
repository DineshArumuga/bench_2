#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>
#include<unistd.h>


#define MAX 20
pthread_t even,odd;
pthread_mutex_t mutex;
int count = 0;

void *even_fun(void *arg)
{
	int i;
	while(count<=MAX)
	{
		pthread_mutex_lock(&mutex);
		if(count%2==0)
		{
			printf("Even Number = %d\n",count++);
		}
		pthread_mutex_unlock(&mutex);
	}
}


void *odd_fun(void *arg)
{
	int i;
	while(count<=MAX)
	{
		pthread_mutex_lock(&mutex);
		if(count%2==1)
		{
			printf("ODD  Number = %d\n",count++);
		}
		pthread_mutex_unlock(&mutex);
	}
}


int main()
{
	if((pthread_mutex_init(&mutex,NULL)) != 0)
	{
		printf("Mutex is failed\n");
		return 0;
	}
	if((pthread_create(&even,NULL,even_fun,NULL))!=0)
	{
		printf("Pthread is not created\n");
		return 0;
	}
	if((pthread_create(&odd,NULL,odd_fun,NULL))!=0)
	{
		printf("Pthread is not created\n");
		return 0;
	}

	pthread_join(even,NULL);
	pthread_join(odd,NULL);
	pthread_mutex_destroy(&mutex);
}
