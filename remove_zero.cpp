//Write a program to move all the zeros to the end

#include<stdio.h>
int remove_zero(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            int temp=arr[i];
            arr[i]=arr[res];
            arr[res]=temp;

            res++;
        }
    }
    return res;
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

    int index = remove_zero(arr,n);

    for(i=0;i<index;i++)
    {
        printf("%d\t",arr[i]);
    }
}
