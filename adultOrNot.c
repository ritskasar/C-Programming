#include<stdio.h>
void main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    
    if(age>18)
    {
        printf("you are adult . . \n");
        printf("you can vote and drive .\n");
    }else{
        printf("You are not adult . .\n");
    }

    printf("Thank you . . \n");
}