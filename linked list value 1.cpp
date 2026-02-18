#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node* link;
}
node;
int main()
{
node *head, *p, *q;
head=(node*) malloc(sizeof(node));
printf("enter any value");
scanf("%d", &head->data);
head->link=NULL;

p=(node*) malloc (sizeof(node));
printf("enter any value");
scanf("%d", &p->data);
head->link=p;

q=(node*) malloc (sizeof(node));
printf("enter any value");
scanf("%d", &q->data);
p->link=q;
q->link=NULL;
while(head!=NULL)
{
	printf("%d", head->data);
	head=head->link;
}
}
