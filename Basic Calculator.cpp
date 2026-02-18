#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,choice,sum,diff,pro,quo,rem;
	printf("enter any two number");
	scanf("%d %d",&a,&b);
	printf("enter choice1 for sum, choice2 for difference, choice3 for product, choice4 for Quotient, choice5 for reminder");
	scanf("%d",&choice);
	if(choice==1)
	{
		sum=(a+b);
		printf("%d",sum);
	}
	else if(choice==2)
	{
		diff=(a-b);
		printf("%d",diff);
	}
	else if(choice==3)
	{
		pro=(a*b);
		printf("%d",pro);
	}
	else if(choice==4)
	{
		quo=(a/b);
		printf("%d",quo);
	}
	else if(choice==5)
	{
		rem=(a%b);
		printf("%d",rem);
	}
	else
	printf("Wrong choice!!!");
}
