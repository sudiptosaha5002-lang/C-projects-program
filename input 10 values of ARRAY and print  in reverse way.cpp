//input 10 values of ARRAY and print  in reverse way
#include <stdio.h>

int main() 
{
    int arr[10],i;
    printf("Enter 10 valuesof array\n");
    for (int i = 0; i < 10; i++) 
	{
        scanf("%d", &arr[i]);
    }
    for ( i = 9; i >= 0; i--) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

