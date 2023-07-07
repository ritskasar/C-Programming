#include<stdio.h>
void main()
{
    FILE *fptr ;
     
    fptr = fopen("fileProgram1.c" , "r");

    char ch;
    ch = fgetc(fptr);

    while ((ch != EOF))
    {
        printf("%c",ch);
        ch = fgetc(fptr);
    }

    printf("\n");
    fclose(fptr);
    
}