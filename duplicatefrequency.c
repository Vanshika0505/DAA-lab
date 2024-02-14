#include<stdio.h>
void main()
{
    int arr[]={2,2,2,13,13,43,43,65,67,78,87,90,90},x,count=0,i;
    int size=sizeof(arr);
    printf("enter the key element:");
    scanf("%d",&x);
    for(i=0;i<size;i++)
    {
        if(arr[i]==x)
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("element present.\n");
    }
    else
    {
        printf("element not present.\n");
    }
    printf("number of copies:%d",count);
}