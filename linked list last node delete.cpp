#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *link;
} node;
node* insert ();
void display ();
void delete();
main()
{
    node *head,*ptr;
    head=(node*) malloc(sizeof(node));
    printf("Enter value:");
    ptr=head;
    scanf("%d",&head->data);
    head->link=NULL;
    int n;
    for(int i=0; i<5; i++)
    {
        printf("Enter value:");
        scanf("%d",&n);
        ptr = insert(ptr, n);
    }

    display(head);
    printf("\n");
    display(head);

}

node *insert( node *ptr, int n) {
    node *temp;
    temp=(node*)malloc(sizeof(node));
    ptr->link=temp;
    temp->data=n;
    temp->link=NULL;
    return temp ;
}

void display( node *head)
{
    while (head != NULL)
    {
        printf("%d ",head->data);
        head=head->link;
    }
}

void delete(node *head) {
    while(head->link->link !=NULL)
    {
        head=head->link;
    }
    free(head->link);
    head->link=NULL;

}
