#include<stdio.h>

void main()
{
    FILE *fptr ;
    fptr = fopen("newFile.c" , "r");

    char ch;
    fscanf(fptr , "%c" ,&ch);
    printf("Character : %c\n ",ch);

    fclose(fptr);
}