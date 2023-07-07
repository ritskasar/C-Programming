#include<stdio.h>

void main()
{
    FILE *fptr;
    fptr = fopen("OppoNum.txt" , "w");

    int n ;
    printf("Enter any number :");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
       if(i%2 != 0)
       {
        if(i>10*i)
        {
         fprintf(fptr , "\n");
         continue;
        }

        fprintf(fptr , "%d\t" , i);
       }
    }

    fclose(fptr);
    
}