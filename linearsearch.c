#include<stdio.h>
int LinearSearch(int A[],int n,int key)
{
    for(int i=0;i<n;i++)
        if(A[i]==key)
            return i;
    return -1;
}
void InputArray(int A[],int n)
{
    int i;
    printf("Enter %d Elements : \n",n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
}
int main()
{
    int A[100],n,key,i;
    printf("Enter size of array : ");
    scanf("%d",&n);
    InputArray(A,n);
    printf("\nEnter search key value : ");
    scanf("%d",&key);
    int result = LinearSearch(A,n,key);
    if(result == -1)
        printf("Element is not present in array");
    else
        printf("Element is present at index %d",result);
    return 0;
}