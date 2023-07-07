#include<stdio.h>

void main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);

    int aadhar[n];
    

    int *ptr = &aadhar[0];

    for(int i=0;i<n;i++)
    {
        printf("%d index of : \n ",i);
        scanf("%d",&aadhar[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d index of : %d\n",i,aadhar[i]);
    }
    
}