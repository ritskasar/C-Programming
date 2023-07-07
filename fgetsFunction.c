#include<stdio.h>

void main()
{
    char name[100];
    printf("Enter your name :\n ");
    fgets(name , 100 , stdin);
    puts(name);

}