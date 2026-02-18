#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,d;
	printf("enter diagonal of a square");
	scanf("%d", &d);
	n=d/sqrt(2);
	a=n*n;
	printf("%d", a);
}
