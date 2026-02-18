#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void generate(char *num)
{
	int i;
	num[0]='8';
	num[1]='6';
	for(i=2; i<10; i++)
	{
		num[i]=rand()%10+'0';
	}
	num[10]='\0';
}

int main()
{
	srand(time(0));
	char num[11];
	generate(num);
	printf("generated number: %s\n",num);
	return 0;
}
