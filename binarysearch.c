#include<stdio.h>
void main()
{
    int arr[]={2,13,43,65,67,78,87,90},x;
    int size=sizeof(arr),mid;
    int low=0,high=size-1;
    printf("enter the key element:");
    scanf("%d",&x);
    while(low<=high)
   {
    mid=(low+high)/2;
    if(arr[mid]==x)
    {
        break;
    }
    if(arr[mid]<x)
    {
        low=mid+1;
    }
    else
    high=mid-1;
   }
   if(mid!=0)
   printf("element is found at index: %d",mid);
   else
   {
    printf("element not found");
   }
}