#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,nd,r,s;
	s=0;
	printf("enter number of digit");
	scanf("%d", &nd);
	printf("enter any number");
	scanf("%d", &n);
	i=1;
	while(i<=nd)
	{
		r=n%10;
		n=n/10;
		s=s+r;
		i=i+1;
	}
	printf("%d", s);
}
