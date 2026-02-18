#include<stdio.h>
#include<math.h>
int main()
{
	int n,f=2;
	printf("enter any number");
	scanf("%d", &n);
	while(n>1)
	{
		if(n%f==0)
		{
			printf("%d", f);
			n=n/f;
		}
		else
		f++;
	}
}
