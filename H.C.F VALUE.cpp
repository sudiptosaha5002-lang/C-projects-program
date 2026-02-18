#include <stdio.h>
int main()
{
	int a,b,r,hcf;
	printf("enter terms");
	scanf("%d%d", &a, &b);
	while(a%b !=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	hcf=b;
	printf("%d", hcf);
}
