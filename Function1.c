#include<stdio.h>

int sum(int a , int b);

void main()
{
int a , b ;
printf("Enter any two numbers :\n ");
scanf("%d%d",&a,&b);

int Addition = sum(a,b);

printf("Sum of two numbers : %d\n" , Addition);
}

int sum(int x,int y)
{
   int  add=x+y;
    return(add);
}