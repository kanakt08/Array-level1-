//Write a program to find the maximum difference

#include<stdio.h>
int max_diff(int arr[],int n)
{
    int maxdiff=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i]){

                int d = arr[j]-arr[i];

                if(d>maxdiff)
                {
                    maxdiff=d;
                }
            }
        }
    }
    return maxdiff;
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
    int d = max_diff(arr,n);

    printf("maximum difference : %d",d);
}
