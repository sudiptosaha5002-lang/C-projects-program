#include<stdio.h>
#include<stdlib.h>
int stack[30];
int top=-1;

push(int val)
{
	if(top==30)
	  printf("\nStackfull");
	else
	{
		top++;
		stack[top]=val;
	}
	  
}

pop()
{
	if(top==-1)
	 printf("\nStack empty");
	else
	{
		 top--;
		 printf("\n One value deleted");
	}	 
}

main()
{
	int n,i;
	while(1)
	{
		printf("\n\nMENU:\n\n1 for PUSH\n2 for display\n3 for POP\n4 for exit\n");
		scanf("%d",&i);
		switch(i)
		{
		   case 1: printf("\nEnter value to insert ");
		           scanf("%d",&n);
				   push(n);
				   break;
		   case 2 : i=top;
		           printf("\nStack is below.........\n");
		           while(i!=-1)
		           {
		           	 printf("\t %d\n",stack[i]);
					 i--;				   
			       }
				   break;
		   case 3: pop();
		           break;
		   case 4 : exit(0);
		   default: printf("Wrong value entered");	
		}
	}
}
