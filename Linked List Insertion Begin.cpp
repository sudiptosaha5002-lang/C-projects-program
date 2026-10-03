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
node* InsertAtBegin(node *head)
{
	node *New=NULL;
	New=(node *)malloc(sizeof(node));
	printf("enter the value of this new Node:");
	scanf("%d",New->data);
	New=head;
	return head;
}
void display(node *head)
{
	printf("Updated Linked List:");
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
   head=InsertAtBegin(head);
   display(head);
}

