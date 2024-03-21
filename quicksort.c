# include<stdio.h>
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
    printf("\n");
}
void swap(int *a,int *b)
{
    int temp = *a;
    *a=*b;
    *b= temp;
}
int partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i = low;
    int j = high;
    while(i<j)
    {
        while(arr[i]<=pivot && i<=high-1)
            i++;
        while(arr[j]>pivot && j>=low+1)
            j--;
        if(i<j)
            swap(&arr[i],&arr[j]);
    }
    swap(&arr[low],&arr[j]);
    return j;
}
void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int partitionIndex = partition(arr,low,high);
        quicksort(arr,low,partitionIndex-1);
        quicksort(arr,partitionIndex+1,high);
    }
}
int main()
{
    int arr[100],n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    InputArray(arr,n);
    printf("Original Array : ");
    printArray(arr,n);
    quicksort(arr,0,n-1);
    printf("Sorted Array : ");
    printArray(arr,n);
}