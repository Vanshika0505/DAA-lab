#include<stdio.h>
void main()
{
    int arr[]={2,2,2,13,13,43,65,67,67,78,87,90,90,91},x;
    int size=sizeof(arr),mid,count=1;
    int low=0,high=size-1;
    printf("enter the key element:");
    scanf("%d",&x);
    while(low<=high)
   {
    mid=(low+high)/2;
    if(arr[mid]==x)
    {
        count++;
    }
    if(arr[mid]<x)
    {
        low=mid+1;
    }
    else
    high=mid-1;
   }
   if(mid!=0)
   {
        printf("element is found.");
        printf("number of copies:%d",count);
   }
   else
   {
    printf("element not found");
   }
}