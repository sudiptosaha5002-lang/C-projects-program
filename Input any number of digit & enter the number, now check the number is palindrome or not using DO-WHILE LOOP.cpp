#include<stdio.h>
#include<math.h>
int main()
{
	int i,nd,rev=0,r,s,n,num;
	s=0;
	printf("enter number of digits");
	scanf("%d",&nd);
	printf("enter any number");
	scanf("%d", &n);
	num=n;
	i=1;
	do
	{
		r=n%10;
		n=n/10;
		i=i+1;
		rev=rev*10+r;
	}
	while(i<=nd);
	if(rev==num)
	printf("palindrome number");
	else 
	printf("not palindrome number");
}
