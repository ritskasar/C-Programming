#include<stdio.h>

int fibonacci(int n);

void main()
{

    int n;
    printf("Enter any number :\n");
    scanf("%d",&n);
    printf("Fibonacci series of %d is : %d \n",n,fibonacci(n));
    
}

int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    if (n==1)
    {
       return 1;
    }
    
    int fibonum1=fibonacci(n-1);
    int fibonum2=fibonacci(n-2);
    int fibonum = fibonum1 + fibonum2;

    for(int i=0;i<n;i++)
    {
        printf("%d\t",fibonum);
    }

    return (fibonum);
}