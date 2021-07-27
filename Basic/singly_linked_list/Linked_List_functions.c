/* * This is the function program it has all the function required for the linked list
* */
//This section contains the declearation of those function which is used here
int getCount();
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};
struct node *Head=NULL;
void insert_node_end(int data)
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
		printf("Elements of the linked list :-\n");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
void insert_node_beg(int data)
{
	struct node *newnode,*temp;
	newnode=(struct node *)malloc(sizeof(*newnode));
	if(newnode==NULL)
		printf("The memory cannot be allocated sorry!\n");
	newnode->data = data;
	newnode->next = NULL;
	if(Head==NULL)
		Head=newnode;
	else
	{
		newnode->next=Head;
		Head=newnode;
	}
}
void insert_node_pos(int data,int pos)
{
	int i=0;
	int ch;
	struct node *temp,*newnode;
	if(pos<1)
	{
		printf("Invalid position\n");
		return ;
	}
	if(pos==1)
		insert_node_beg(data);
	else if(pos == (getCount()+1) )
		insert_node_end(data);
	else if(pos > (getCount()+1))
	{	
		printf("Do you want to insert at the last position\t?[y==1/n==0]     :");
		scanf("%d",&ch);
		if(ch)
			insert_node_end(data);
		else
			return ;
	}	
	else
	{
		newnode = (struct node *)malloc(sizeof(*newnode));
		newnode ->data =data;
		newnode ->next = NULL;
		temp=Head;
		while(i<pos-1)
			temp=temp->next;
		newnode->next=temp->next;			//The link is now joined and hence the nodes are intact
		temp->next=newnode;
	}
}
int getCount()
{
	struct node *temp;
	int count=0;
	temp=Head;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	return count;
}	


		
	
