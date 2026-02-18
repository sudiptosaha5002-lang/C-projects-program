#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node  *link;
};

typedef struct node node;

/*******************/
display(node *h)
{
  while(h!=NULL)
  {
  	printf(" %d ",h->data);
  	h=h->link;
  }	
}
/*******************/
midinsert(node *p,int k)
{
   node *m;
   while(p->data!=k && p!=NULL)	
     p=p->link;
   m=(node*)malloc(sizeof(node));
   printf("\nEnter data ");
   scanf("%d",&m->data);
   m->link=p->link;
   p->link=m;	
}





/*******************/

lastinsert(node *p)
{
	node *m;
	while(p->link!=NULL)
	    p=p->link;
    m=(node*)malloc(sizeof(node));
	printf("\nEnter data ");
	scanf("%d",&m->data);
	p->link=m;
	m->link=NULL;
	 
}
/*******************/
main()
{
	int n,i;
	node  *p,*q,*head;
	printf("\nEnter number of term :");
	scanf("%d",&n);
	head=(node*)malloc(sizeof(node));
	printf("\nEnter data ");
	scanf("%d",&head->data);
	head->link=NULL;
	p=head;
	
	for(i=0;i<n-1;i++)
	{
	   	q=(node*)malloc(sizeof(node));
	   	printf("\nEnter data ");
     	scanf("%d",&q->data);
     	p->link=q;
     	q->link=NULL;
     	p=q;     	
	}
	while(1)
	{
		printf("\n\nMENU:\n\n1 for insert\n2 for display\n3 for delete\n4 for exit\n");
		scanf("%d",&i);
		switch(i)
		{
			case 1: printf("\n7 for first insert\n8 for mid insert\n9 for last insert\n");
			        scanf("%d",&i);
			        switch(i)
			        {
			        	case 7: lastinsert(head);
			        	        break;
			        	case 8: printf("\nEnter key value ");
			        	        scanf("%d",&n);
			        	        midinsert(head,n);
			        	        break;
			            case 9: lastinsert(head);
			                    break;
			        	        
					}
			       
			       break;
		    case 2:	printf("\nLINK LIST IS BELOW......\n");	
			        display(head);
			        break;
			case 3:display(head);
			       break;
		    case 4:exit(0);	       
						
				
		}
	}


}
