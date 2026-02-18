#include<stdio.h>

int main()
{
    char sex,ms;
    int age;
    printf("Enter age,sex,metarial status:");
    scanf("%d,%c,%c", &age,&sex,&ms);
    if((ms=='M')|| (ms=='U' && sex=='m' && age>30) || (ms=='U' && sex=='f' && age>25))
    printf("Driver was insured");
    else
    printf("Driver was not insured");
    return 0;
}