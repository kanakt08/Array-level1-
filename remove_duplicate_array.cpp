//Write a program to remove all the duplicate elements from an array

#include<stdio.h>

int rev_duplicate(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}

int main()
{
//    int n,arr[20],i;
//    printf("enter the size of an array : ");
//    scanf("%d",&n);
//
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&arr[i]);
//    }

    int arr[]={2,2,2,3,3,5,5,7,9,11};
    int n=sizeof(arr)/sizeof(arr[0]);

    int index = rev_duplicate(arr,n);

    for(int i=0;i<index;i++)
    {
        printf("%d\t",arr[i]);
    }

}
