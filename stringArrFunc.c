#include<stdio.h>

void printString(char arr[]);

void main()
{
    char name[] = {'R','U','T','I','K','A','\0'};
    char surname[] = "KASAR";

    printString(name);
    printString(surname);
}

void printString(char arr[])
{

    for(int i=0; arr[i] != '\0' ;i++)
    {
        printf("%c",arr[i]);

    }
    printf("\t");
}