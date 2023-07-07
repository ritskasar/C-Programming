#include<stdio.h>

void main()
{
    FILE *fptr ;
    fptr = fopen("helloWorld.c", "a");

    if(fptr == NULL)
    {
        printf("File does't exist : ");
    }else{
        printf("File is exist :");
        fclose(fptr);
    }

}