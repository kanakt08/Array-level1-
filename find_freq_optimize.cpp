//Write a program to find the frequency in a sorted array

#include<stdio.h>
void freq(int arr[],int n)
{
    int c=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1])
        {
            c++;
        }
        else
        {
            printf("a[%d] occurs : %d\n",arr[i],c);
            c=1;
        }
    }
    printf("a[%d] occurs : %d\n",arr[n-1],c);
}

int main()
{
    int arr[]={3,3,3,5,5,7,8,8,8,9,9,10,11,14,14};

    int n=sizeof(arr)/sizeof(arr[0]);

    freq(arr,n);
}
