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
node *DeleteMiddleIndexNode(node *head)
{
	int i,pos=0;
	node *ptr=NULL,*temp=NULL;
	printf("enter the position for delete:");
	scanf("%d",&pos);
	ptr=head;
	for(i=1; i<pos-1; i++)
	{
		ptr=ptr->next;
	}
	temp=ptr->next;
	ptr->next=temp->next;
	free(temp);
	return head;
}
void display(node *head)
{
	printf("\nUpdated Linked List:");
	node *ptr;
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
	originalNode(head);
	head=DeleteMiddleIndexNode(head);
	display(head);
}

