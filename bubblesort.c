#include <stdio.h>
void bubbleSort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void InputArray(int arr[],int n)
{
    int i;
    printf("Enter %d Elements : \n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
}
void printArray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[100],n,key,i;
    printf("Enter size of array : ");
    scanf("%d",&n);
    InputArray(arr,n);
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}