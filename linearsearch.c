#include<stdio.h>
void main()
{
    int size,a[20],i,key;
    printf("enter the size of array:");
    scanf("%d",&size);
    printf("enter the values:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched:");
    scanf("%d",&key);
    for(i=0;i<size;i++)
    {
        if(a[i]==key)
        {
            printf("enter found at:%d",i+1);
            break;
        }
    }
    if(i>size)
    {
        printf("element not found:%d",i+1);
    }
}