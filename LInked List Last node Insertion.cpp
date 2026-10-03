#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node*next;
}
node;
node* create()
{
	int nodes=0;
	node*ptr=NULL,*head=NULL;
	printf("enter number of nodes:");
	scanf("%d",&nodes);
	while(nodes>0)
	{
		if(ptr==NULL)
		{
			ptr=(node *)malloc(sizeof(node));
			head=ptr;
		}
		else
		{
			ptr->next=(node *)malloc(sizeof(node));
			ptr=ptr->next;
		}
		printf("enter value:");
		scanf("%d",&ptr->data);
		ptr->next=NULL;
		nodes--;
	}
	return head;
}
node* InsertAtLast(node *head)
{
	node *New=NULL,*ptr=NULL;
	New=(node *)malloc(sizeof(node));
	printf("Enter value:");
	scanf("%d",&New->data);
	New->next=NULL;
	ptr=head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->Next;
	}
	ptr->next=New;
	return head;
}
void display(node *head)
{
	node *ptr;
	printf("Updated Linked-List:");
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
}
int main()
{
   node *head=NULL;
   head=create();
   head=InsertAtLast(head);
   display(head);
}
