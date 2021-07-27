//This is the driver program it uses all the function of this folder and uses it into the main function
#include <stdio.h>
#include "header.h"
int main(void)
{
	int ch;
	while(1)
	{
		printf("\nEnter\n1:To Create the linked list\n2:To Display the linked list\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter the data : ");
					scanf("%d",&ch);			//Here the ch will store the data
					insert_node(ch);
					break;
			case 2:display_ll();
					break;
			default:printf("You have entered the wrong choice\n");
		}
	}
	return 0;
}
