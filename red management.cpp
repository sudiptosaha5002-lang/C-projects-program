#include<stdio.h>
int main()
{
	int pin,select=0,attempts=0;
	float bal=50000.00,amt;
	while(attempts<3)
	{
	printf("enter your PIN:");
	scanf("%d",&pin);
	if(pin==23456)
	{
		printf("ATM Service\n");
	    printf("1) Deposit Money\n");
	    printf("2) Withdraw Money\n");
	    printf("3) Check Balance\n");
	    printf("4)Exit\n");
	    while(select!=4)
	    {
	    	printf("Enter your choice:\n");
	        scanf("%d",&select);
	        switch(select)
	        {
		    case 1:
			     printf("enter amount to deposit:\n");
			     scanf("%f",&amt);
		       	 bal=bal+amt;
			     printf("Updated balance:%.2f\n",bal);
			     break;
		
		    case 2:
			    printf("enter Withdraw amount:\n");
			    scanf("%f",&amt);
			    if(bal>=amt)
			    {
				bal=bal-amt;
			    printf("Updated balance:%.2f\n",bal);
			    break;
			    }
			    else
			    {
				printf("Insufficient balance!!");
				break;
			    }
		
		    case 3:
			     printf("Total Balance:%.2f\n",bal);
			     break;
			
	 	    case 4:
			     printf("Thank you for choosing our service\n");
			
		   default:
			     printf("Invaild Choice!!");
			
	       }
		}
	}
	else
	{
		printf("Invalid PIN!!! Please enter Your PIN!!!\n");
		attempts++;
	}
    }
	if(attempts==3)
	{
		printf("Too many wrong attempts!! Card BLOCKED!!");
		return 0;
	}
	
}
