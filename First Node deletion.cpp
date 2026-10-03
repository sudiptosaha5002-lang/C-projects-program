#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node*next;
}
node;
node *create()
{
	int nodes=0;
	node *ptr=NULL,*head=NULL;
	printf("enter number of Nodes:");
	scanf("%d",&nodes);
	while(nodes>0)
	{
		if(ptr==NULL)
		{
			ptr=(node*)malloc(sizeof(node));
			head=ptr;
		}
		else
		{
			ptr->next=(node*)malloc(sizeof(node));
			ptr=ptr->next;
		}
		printf("enter value:");
		scanf("%d",&ptr->data);
		ptr->next=NULL;
		nodes--;
	}
	return head;
}
void originalNode(node *head)
{
	printf("\nOriginal Linked List:");
    node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
       printf("%d",ptr->data);
       ptr=ptr->next;
    }
}
node *DeleteFirstNode(node *head)
{
	node *temp=NULL;
	node *ptr;
	ptr=head;
	head=head->next;
	free(ptr);
	return head;
}
void display(node *head)
{
	printf("\nAfter Deletion Updated Node:");
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
	head= create();
	head=DeleteFirstNode(head);
	originalNode(node);
	display(head);
}
