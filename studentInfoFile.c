#include<stdio.h>

void main()
{
    FILE *fptr ;
    fptr = fopen("studentInfo. txt" , "w");

    int age;
    char name[100];
    float cgpa;

    printf("Enter Student Information Name , Age and Marks : \n");
    scanf("%s%d%f",name,&age,&cgpa);

    fprintf(fptr , "Name : %s\n" , name);
    fprintf(fptr , "Age : %d\n" , age);
    fprintf(fptr , "Marks : %f\n" , cgpa);

    fclose(fptr);

}