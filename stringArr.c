#include<stdio.h>

void main()
{

    char name[] = "RUTIKA \t KASAR";

    for(int i=0 ; name[i] !='\0'  ; i++ )
    {
        printf("%c",name[i]);
    }
}