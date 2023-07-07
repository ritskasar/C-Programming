#include<stdio.h>

int Fact(int n);  // Function defination . .

void main()
{
    int n;
    printf("Enter any number :\n ");
    scanf("%d",&n);
    printf("Factorial of %d is : %d\n ",n,Fact(n));

}

// Recurtion Function . . 

int Fact(int n)
{
    if(n==1)
    return 1;

    int factNo1 = Fact(n-1);
    int factNo = factNo1 * n;

}