//Write a program to check if an array is sorted
#include<stdio.h>
int check_array_sorted(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,arr[20],i;
    printf("enter the size of an array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int res = check_array_sorted(arr,n);

    if(res)
    {
        printf("array is sorted");
    }
    else
    {
        printf("array is not sorted");
    }
}
