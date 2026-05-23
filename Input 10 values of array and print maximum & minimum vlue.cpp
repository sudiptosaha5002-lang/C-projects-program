//Input 10 values of array and print maximum & minimum vlue.
#include <stdio.h>
int main() 
   {  
    int arr[10],i,max,min;
    printf("Enter 10 values:\n");
    for (i = 0; i < 10; i++) 
	{
        scanf("%d", &arr[i]);
    }
    max = min = arr[0];

    for (i = 1; i < 10; i++) 
	{
        if (arr[i] > max) 
		{
            max = arr[i];
        }
        if (arr[i] < min) 
		{
            min = arr[i];
        }
    }
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
   }

