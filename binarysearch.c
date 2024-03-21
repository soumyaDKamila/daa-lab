#include<stdio.h>
int binarySearch(int arr[],int key,int low,int high)
{
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==key)
            return key;
        if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
void InputArray(int arr[],int n)
{
    int i;
    printf("Enter %d Elements : \n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
}
int main()
{
    int arr[100],n,key,i;
    printf("Enter size of array : ");
    scanf("%d",&n);
    InputArray(arr,n);
    printf("\nEnter search key value : ");
    scanf("%d",&key);
    int result = binarySearch(arr,key,0,n-1);
    if(result == -1)
        printf("Element is not present in array");
    else
        printf("Element is present at index %d",result);
    return 0;
}