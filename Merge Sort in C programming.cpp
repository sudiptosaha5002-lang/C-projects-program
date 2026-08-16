#include<stdio.h>
void merge(int arr[],int l,int mid,int u)
{
    int arr1[10],i,j,k;
    i=l;
    j=mid+1;
    k=l;
    while(i<=mid && j<=u)
    {
        if(arr[i]<arr[j])
            arr1[k++]=arr[i++];
        else
            arr1[k++]=arr[j++];
    }
    while(i<=mid)
	{
    	arr1[k++]=arr[i++];
	}
    while(j<=u)
    {
    	arr1[k++]=arr[j++];
	}    
    for(i=l;i<=u;i++)
    {
    	arr[i]=arr1[i];
	} 
}
void mergeSort(int arr[],int l,int u)
{
    int mid;
    if(l<u)
    {
        mid=(l+u)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,u);
        merge(arr,l,mid,u);
    }
}
int main()
{
    int arr[10],i;
    printf("Enter 10 elements:");
    for(i=0;i<10;i++)
    {
    	scanf("%d",&arr[i]);
	}  
    mergeSort(arr,0,9);
    printf("Sorted Array:");
    for(i=0;i<10;i++)
    {
    	printf(" %d",arr[i]);
	}
}
