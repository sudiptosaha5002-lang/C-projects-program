#include<stdio.h>
int main()
{
	int n,days,m,w,y,rd,rm;
	printf("enter number of days");
	scanf("%d", &n);
	y=n/365;
	rd=n%365;
	m=rd/30;
	rm=rd%30;
	w=rm/7;
	days=rm%7;
	printf("%dyear,%dmonth, %dweek, %dyear, %ddays", y,m,w,days);
}
