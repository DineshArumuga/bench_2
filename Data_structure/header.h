#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdint.h>

typedef struct student_details
{
	char name[20];
	int rollno;
	struct student_details *next;
}SD;

void add_node(SD **);
void print(SD *);
int count_node(SD *);
void asscending_order(SD *);
void reverse_data(SD *);
