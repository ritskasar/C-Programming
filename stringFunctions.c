#include<stdio.h>
#include<string.h>

void main()
{
    char name[50] ;
    char nikname[50];
    char surname[50];

    printf("Enter your name : ");
    fgets(name , 100 , stdin);
    //puts(name);

    printf("Enter your nikname : ");
    fgets(nikname , 100 , stdin);

    printf("Enter your surname : ");
    fgets(surname , 100 , stdin);
    //puts(surname);


   // USING STRING LENGTH FUNCTION . . . 
    int lenght = strlen(name);
    printf("Lenght of name : %d\n",lenght);


    // Using string Concatenation Function  . . 

    strcat(name , surname);
    printf("Full Name is :");
    puts(name);


    //Using STRING COPY FUNCTION  . . . 

    strcpy(name, nikname);
    printf("Now Your name : ");
    puts(name);


    // Using String Compare Function . . .

    printf("%d",strcmp(name ,nikname));


}
