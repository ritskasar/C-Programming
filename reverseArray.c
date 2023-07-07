#include<stdio.h>

void main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0 ; i<n; i++)
    {
        printf("%d :",i);
        scanf("%d",&arr[i]);
    }

    printf("Numbers before reverse : ");

    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    for(int i=0;i<n/2;i++)
    {
        int firstNum = arr[i];
        int  secondNum = arr[n-i-1];
        arr[n-i-1] = firstNum ;
        arr[i] = secondNum ;
    }

    printf("\nNumbers after reverse : ");

    for (int  i = 0; i < n; i++)
    {
       printf("%d \t" ,arr[i]);
    }
    
}