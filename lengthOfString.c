#include<stdio.h>
#include<string.h>

void main()
{

    char name[100] ;
    int count = 0;
    printf("Enter your name : ");
    fgets(name , 100 , stdin);
    puts(name);

    for(int i = 0 ; name[i] != '\0';i++)
    {
        count++;
    }
    count = count-1;

    printf("Length of given String is : %d\n",count);

   /* for(int i=0;name[i] != '\0';i++)
    {
        printf("%c",name[i]);
    }

    */
   
   // USING STRING CLASS FUNCTION : 

    int lenght = strlen(name);
    printf("Lenght of string : %d\n",lenght);

}