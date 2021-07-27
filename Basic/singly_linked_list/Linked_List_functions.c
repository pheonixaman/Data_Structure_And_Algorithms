/* * This is the function program it has all the function required for the linked list
* */
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};
struct node *Head=NULL;
void insert_node(int data)
{
	struct node *newnode,*temp;
	//This section creates the new node and assign the value of the data to it
	newnode = (struct node * )malloc(sizeof(struct node));
	newnode ->data = data;
	newnode ->next =NULL;
	//This section checks whether the linked list is empty or not
	if(Head==NULL)
		Head=temp=newnode;
	else
	{
		temp=Head;
		while(temp->next !=NULL)	//This is just to traverse to the last node
			temp=temp->next;
		temp->next=newnode;
		temp=newnode;
	}
}
void display_ll(void)
{
	struct node *temp;
	temp=Head;
	if(Head==NULL)
		printf("The linked list is empty there is nothing to print\n");
	else
		printf("Elements of the linked list : ");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}

		
	
