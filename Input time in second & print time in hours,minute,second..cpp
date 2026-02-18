#include<stdio.h>
int main()
{
	int n,time,sec,h,m,rm,rh;
	printf("enter time in second");
	scanf("%d", &n);
	h=n/3600;
	rh=n%3600;
	m=rh/60;
	sec=rh%60;
	printf("%dhour, %dminute, %dsecond", h,m,sec);
}
