#include<stdio.h>

int Sum(int n);                 //Function declaration

void main()
{
    int n;
    printf("Enter any number : \n");
    scanf("%d",&n);
    printf("Sum of %d Numbers : %d\n",n,Sum(n));
}


// Recursion function . . 

int Sum(int n)
{
    if(n==1)
    return 1;

    int sumNum1 = Sum(n-1);
    int sumNm = sumNum1 + n;

}