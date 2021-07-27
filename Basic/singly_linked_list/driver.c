//This is the driver program it uses all the function of this folder and uses it into the main function
#include <stdio.h>
#include "header.h"
int main(void)
{
	int i;
	int ch,pos;
	while(1)
	{
		printf("\nEnter\n1:To Create the linked list or concatinate the previous one\n2:To Display the linked list\n3:To insert a node\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter the no of data that you want to insert\n");
					scanf("%d",&pos);						//Here pos stores the no of nodes
					for(i=0;i<pos;i++)
					{
						printf("Enter the data : ");
						scanf("%d",&ch);			//Here the ch will store the data
						insert_node_end(ch);
					}
					break;
			case 2:display_ll();
					break;
			case 3:printf("Enter the data : ");
					scanf("%d",&ch);			//Here the ch will store the data
					printf("Enter the position in which you want to insert the node\n");
					scanf("%d",&pos);
					insert_node_pos(ch,pos);
					break;
			default:printf("You have entered the wrong choice\n");
		}
	}
	return 0;
}
