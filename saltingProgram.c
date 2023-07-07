#include<stdio.h>
#include<string.h>
void main()
{
    char Password[100];
    char NewPassword[100];
    char Salting[]= "@123";

    printf("Enter your password : ");
    scanf("%s",&Password);

    printf("\n");

    strcpy(NewPassword,Password);        // string copy function
    strcat(NewPassword,Salting);         // string concatination function

    printf("Your Password is : ");
    puts(Password);

    printf("Your protected password is : ");
    puts(NewPassword);
    
}