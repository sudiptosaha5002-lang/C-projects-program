#include <stdio.h>
int main()
{
	int i,n;
	printf("enter any number");
	scanf("%d", &n);
	if(n%7==0 && n%10==7)
	printf("Buzz number");
	else
	printf("not buzz number");
}
