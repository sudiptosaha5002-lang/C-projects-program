#include <stdio.h>
int main()
{
	int i;
	printf("enter any number");
	scanf("%d", &i);
	for(i=2; i<=20; i=i+2)
	{
		printf("%d", i);
	}
}
