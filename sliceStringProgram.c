#include<stdio.h>

void main()
{

    int n , m ,count=0;
    char string[100];
    char newString[100];

    printf("Enter any string : ");
    scanf("%s",string);

    printf("Enter n and m :");
    scanf("%d%d",&n,&m);

    for(int i=n; i<=m ; i++,count++)
    {
        newString[count] = string[i]; 
    }
    newString[count] = '\0';
    
    printf("New String : ");
    puts(newString);

}