#include<stdio.h>

int main() 
{
    int arr[10],i,c,j;
    printf("enter 10 elemenmt\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
    	c=0;
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
             c=c+1;
            }
        }
        if (c==2)
       {
          printf("%d",arr[i]);
       }
    }
    
}
