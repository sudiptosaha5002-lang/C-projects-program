#include<stdio.h>
int main()
{
	char name[100];
	int i,option,choose;
	printf("Enter your name:");
	scanf("%s", name);
	printf("Want it to convert in UPPERCASE/SMALLCASE/mixup-Then choose option<YES=1 & NO=0>");
	scanf("%d", &option);
	
	if(option==1)
	{
		printf("\nConvert into 'UPPERCASE'-press(65)");
		printf("\nConvert into 'smallcase'-press(97)");
		printf("\nConvert into 'MixCase'-press(200)");
		printf("\nPRESS/CHOOSE YOUR VALUE(1/2/3):");
		scanf("%d", &choose);
		
		if(choose==65)
	    {
		for(i=0; name[i]!=0; i++)
		{
			if(name[i]>=97 && name[i]<=122)
			{
				name[i]=name[i]-32;
			}
		}
		printf("Your Name in UPPERCASE:%s",name);
	    }
	else if(choose==97)
	{
		for(i=0; name[i]!=0; i++)
		{
			if(name[i]>=65 && name[i]<=90)
			{
				name[i]=name[i]+32;
			}
		}
		printf("Your name in smallcase:%s",name);
	}
	else if(choose==200)
	{
		for(i=0; name[i]!=0; i++)
		{
		   if((i%2==0 && name[i]>='a' && name[i]<='z') || (i%2!=0 && name[i]>='A' && name[i]<='Z'))
		   {
			name[i] ^=32;
		   }	
		}
		printf("Your name in Mixup codition:%s",name);
	}
	else
	{
		printf("INVALID-CHOICE! PRESS RIGHT VALUE!!!");
	}
	   
    }
	
	if(option==0)
	{
		printf("Exit Program");
	}
	
	
}	