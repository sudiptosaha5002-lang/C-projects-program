#include<stdio.h>
#include<math.h>
int main()
{
	int d,w,l;
	printf("enter length & width of a rectangle");
	scanf("%d%d", &w, &l);
	d=sqrt((w*w)+(l*l));
	printf("%d",d);
}
