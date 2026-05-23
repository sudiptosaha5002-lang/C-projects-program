//STRING PALINDROME CHECK
#include<stdio.h>
#include<string.h>
int main()
{
	char a[10], b[10];
	printf("enter a string\n");
	gets(a);
	strcpy(b,a);
	strrev(b);
  	if (strcmp(a,b)==0)
  	printf(" STRING IS A PALINDROME");
  	else
  	printf("STRING IS NOT A PALINDROME");
}
