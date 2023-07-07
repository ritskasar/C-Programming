#include<stdio.h>

void main()
{

    int i=25;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d\n",**pptr);
}
