#include"header.h"

int main()
{
	int number,choose;
	while(1) {
		printf("Choose the option\n1.Set a particular bit given position\n2.Clear a particular bit given position\n3.Toggle a particular bit given position\n4.Toggle bit in a given range\n5.Particular bit is set or not\n6.Swap the data\n7.Find the number is Odd or Even\n8.Clear the last left side bit\n9.Set the last left side bit\n10.power of 2\n11.count the set bit\n99.Exit\n");
		scanf("%d",&choose);
		switch(choose)
		{
			case 1: set_bit();
				break;
			case 2: clear_bit();	
				break;
			case 3: toggle_bit();
				break;
			case 4: toggle_range();
				break;
			case 5: set_or_not();
				break;
			case 6: swap_data();
				break;
			case 7: odd_even();
				break;
			case 8: clear_last_bit();
				break;
			case 9: set_last_bit();
				break;
			case 10:power_2();
				break;
			case 11:count_set();
				break;
			case 99:printf("Program is terminated\nBYE BYE.....\n");
				exit(0);
			default:printf("Please choose the correct option\n");

		}
	}
}
