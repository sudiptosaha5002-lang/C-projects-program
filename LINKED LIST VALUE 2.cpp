#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct node {
    int data;
    struct node* link;
} node;
main()
{
    node *head,*a,*b,*c,*d,*e,*f;
    head=(node*) malloc(sizeof(node));
    printf("Enter value:");
    scanf("%d",&head->data);
    head->link=NULL;

    a=(node*) malloc(sizeof(node));
    printf("Enter value:");
    scanf("%d",&a->data);
    head->link=a;

    b=(node*) malloc(sizeof(node));
    printf("Enter value:");
    scanf("%d",&b->data);
    a->link=b;

    c=(node*) malloc(sizeof(node));
    printf("Enter value:");
    scanf("%d",&c->data);
    b->link=c;

    d=(node*) malloc(sizeof(node));
    printf("Enter value:");
    scanf("%d",&d->data);
    c->link=d;

    e=(node*) malloc(sizeof(node));
    printf("Enter value:");
    scanf("%d",&e->data);
    d->link=e;

    f=(node*) malloc(sizeof(node));
    printf("Enter value:");
    scanf("%d",&f->data);
    e->link=f;
    f->link=NULL;
    while (head != NULL)
    {
        printf("%d ",head->data);
        head=head->link;
    }
    getch();
}

