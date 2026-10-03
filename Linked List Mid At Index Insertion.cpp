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
	node *ptr=NULL, *head=NULL;
	printf("Enter number of node:");
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
node* MidIndexInsert(node *head)
{
	int pos=0;
	node *New=NULL;
	printf("Enter position to Insert:");
	scanf("%d",&pos);
	New=(node *)malloc(sizeof(node));
	printf("enter value:");
	scanf("%d",&New->data);
	ptr=head;
	for(i=1; i<pos-1; i++)
	{
		ptr=ptr->next;
	}
	New->next=ptr->next;
    return head;
}
void display(node *head)
{
	Printf("Updated Linked List:");
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d",ptr-data);
		ptr=ptr->next;
	}
}
int main()
{
   node* head=NULL;
   head=create();
   head=MidIndexPosition(head);
   display(head);
}

