#include<stdio.h>

int numberArray(int arr[] , int n);

void main()
{
    int arr [] = {23,34,547,23,345,677};
    numberArray(arr , 6);
}

int numberArray(int arr[] , int n)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            count++;
        }
    }

    printf("%d\t",count);

}

