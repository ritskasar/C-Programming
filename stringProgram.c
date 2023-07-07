#include<stdio.h>

void main()
{
    char name [50];
    printf("Enter your name : ");
    scanf("%s",name);

    for(int i=0 ;name [i]!='\0';i++)
    {
        printf("%c",name[i]);
    }
}