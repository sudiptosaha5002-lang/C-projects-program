#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node*next;
	struct node*prev;
}
node;
int main()
{
	int num=0,N;
	struct Node*N=NULL, *head=NULL;
	printf("Enter number of nodes:");
	scanf("%d",&num);
	while(num>0)
	{
		if(N==NULL)
		{
			N=(struct node*)malloc(sizeof(struct node));
			head=N;
			printf("Enter a Value:");
			scanf("%d",&N->data);
			N->next=NULL;
		}
		else
		{
	       N->next=(struct node*)malloc(sizeof(struct node));
	       N=N->Next;
	       printf("Enter a Value:");
		   scanf("%d",&N->data);
		   N->next=NULL;
		}
		num=num-1;
	}
	N=head;
	printf("Given Linked List are:");
	while(N!=NULL)
	{
		printf("%d",N->data);
		N-N->next;
	}
	return 0;
}
