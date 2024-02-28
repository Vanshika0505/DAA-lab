#include<stdio.h>
int count_occurence(int arr[],int n,int key)
{
    int left=0,right=n-1,count=0;
    int mid;
    while(left<=right) 
    {
        mid=(left+right)/2;
        if(arr[mid]==key)
        {
            count=1;
            break;
        }
        else if(arr[mid]<key)
            left=mid+1;
        else    
            right=mid-1;     
    }
    if(count==0)
        return count;
    int low= mid-1,high=mid+1;
    while(low>=left && arr[low]==key)
    {
        count++;
        low--;
    }
    while(high<+right&& arr[high]==key)
    {
        count++;
        high++;
    }
    return count;
}
int main()
{
    int arr[]={1,2,2,3,3,3,4,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=3;
    int occurances=count_occurence(arr,n,key);
    if(occurances)
    {
        printf("key %d is present %d times\n",key,occurances);
    }
    else
    printf("key %d is not present \n",key);
    return 0;
}