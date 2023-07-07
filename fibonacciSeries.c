#include<stdio.h>

void main()
{
    int n ;
    printf("Enter any number : ");
    scanf("%d",&n);

    int Fibo[n];

    Fibo[0]=0;
    Fibo[1]=1;

    printf("%d\t%d\t",Fibo[0],Fibo[1]);

    for (int i = 2; i < n; i++)
    {
       Fibo[i] = Fibo[i-1] + Fibo[i-2];
       printf("%d\t",Fibo[i]);
    }

    printf("\n");
}