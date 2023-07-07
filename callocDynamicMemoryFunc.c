#include<stdio.h>
#include<stdlib.h>

void main()
{

    float *ptr;          // float pointer
    int n;
    printf("Enter any number :");
    scanf("%d",&n);

    ptr = (float*) calloc(n , sizeof(float));      // calloc function . . .

    printf("Enter %d numbers into array : ",n);

    for(int i=0 ; i<n ; i++)
    {
        scanf("%f" , &ptr[i]);
    }

    for(int i=0 ; i<n ;i++)
    {
        printf("%f\t" , ptr[i]);
    }


    printf("\n");


    int m;
    printf("Enter any number : \n");
    scanf("%d",&m);

    ptr = realloc(ptr , m);                 // realloc function  . . .

     printf("Enter %d numbers : " , m);

    for(int i=0 ; i<m;i++)
    {
        scanf("%f",&ptr[i]);
    }

    for(int i=0 ; i<m ; i++)
    {
        printf("%d index of = %f\n",i,ptr[i]);
    }

    printf("Number are available into array are");

    free(ptr);                            // free function . . 

    for(int i ; i<m ; i++)
    {
        printf("%f\t",ptr[i]);
    }
}