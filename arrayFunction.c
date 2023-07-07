#include<stdio.h>

int printArray(int arr[],int n);

void main()
{

    int arr[]={23,34,123,45,345,34};

    printArray(arr , 5);
}

int printArray(int arr[] , int n)
{
    for(int i=0;i<6;i++)
    {
        printf("%d \t",arr[i]);
    }
}