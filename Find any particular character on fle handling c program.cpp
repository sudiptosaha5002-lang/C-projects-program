#include<stdio.h>
#include<conio.h>
int main()
{
	char x,arr[500];
	int i=0;
	FILE *fp;
	fflush(stdin);  //"stdin" library file flash 
	printf("enter character you want to search:");
	scanf("%c", &x);
	if(fp=fopen("abc.txt","r"))
	{
		while(fscanf(fp,"%c", &arr[i]) != EOF)
		{
			i++;
		}
		fclose(fp);
		arr[i]='\0';
		for(i=0; arr[i]!='\0'; i++)
		{
			if(x==arr[i])
			printf("\n search successful");
			else
			printf("\n Search failed");
		}
		
	}
}
