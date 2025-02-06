//Write a program to find the second largest element in an array
#include<stdio.h>

int second_largset(int arr[],int n)
{
    int lar=0,res=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[lar])
        {
            res=lar;
            lar=i;
        }
        else {
                if(arr[i]!=arr[lar])
        {
            if(res==-1 || arr[res]<arr[i]){
                res=i;
            }
        }
        }
    }
    return res;
}


int main()
{
    int arr[]={98,34,53,22,67};

    int index = second_largset(arr,sizeof(arr)/sizeof(arr[0]));

    if(index==-1){
        printf("second largest doesn't exit");
    }
    else{
        printf("second_largest index is %d ",index);
    }
    return 0;
}
