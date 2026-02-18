#include<stdio.h>
#include<conio.h>
struct node{
    int exp;
    int coef;
    struct node *next;
};

main(){
    int i,j,k,n;
    struct node *h1,*h2,*h3,*h4,*temp,*temp1,*temp2,*new;
    clrscr();
    printf("enter the order of the first polynomial: ");
    scanf("%d",&n);
    h1=(struct node *)malloc(sizeof(struct node));
    h1->coef=n;h1->next=NULL;
    temp=h1;
    for(i=n;i>=0;i--){
        printf("Enter the coefficient for x^%d: ",i);
        scanf("%d",&j);
        if(j!=0)
        {
            new=(struct node *)malloc(sizeof(struct node));
            new->coef=j;
            new->exp=i;
            temp->next=new;
            new->next=NULL;
            temp=temp->next;
        }
    }
    printf("Enter the order of the second polynomial: ");
    scanf("%d",&n);
    h2=(struct node *)malloc(sizeof(struct node));
    h2->coef=n;h2->next=NULL;
    temp=h2;
     for(i=n;i>=0;i--){
        printf("Enter the coefficient for x^%d: ",i);
        scanf("%d",&j);
         if(j!=0)
        {
            new=(struct node *)malloc(sizeof(struct node));
            new->coef=j;
            new->exp=i;
            temp->next=new;
            new->next=NULL;
            temp=temp->next;
        }
     }
     if(h1->coef>h2->coef)
        n=h1->coef;
     temp1=h1->next;temp2=h2->next;
     h3=(struct node *)malloc(sizeof(struct node));
    h3->coef=n;
    temp=h3;
    for(i=n;i>=0;i--){
        new=(struct node *)malloc(sizeof(struct node));
        if(temp1->exp==temp2->exp){
            new->exp=temp1->exp;
            new->coef=temp1->coef+temp2->coef;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else if(temp1->exp==temp2->exp){
            new->exp=temp1->exp;
            new->coef=temp1->coef;
            temp1=temp1->next;
        }
        else if(temp1->exp==temp2->exp){
            new->exp=temp2->exp;
            new->coef=temp2->coef;
            temp2=temp2->next;
        }
        temp->next=new;
        new->next=NULL;
        temp=temp->next;
    }
    printf("\nThe sum of the polynomial is ");
    temp=h3->next;
    while(temp!=NULL){
        printf(" %d+x^%d",temp->coef,temp->exp);
        temp=temp->next;
    }
    return 0;
    getch();
}
