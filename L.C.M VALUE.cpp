#include <stdio.h>
int main()
{
	int a,b,r,lcm,p;
	printf("%d%d", &a, &b);
	scanf("%d%d", &a, &b);
	p=a*b;
	while(a%b !=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	lcm=p/b;
	printf("%d", lcm);
}
