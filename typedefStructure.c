#include<stdio.h>

typedef struct computerEngineeringStudents 
{
    int rollNo ;
    char Name[100];
    float cgpa;
}coe;

void main()
{
    coe std;

    printf("Enter Student Roll No , Name and Marks : \n");
    scanf("%d%s%f",&std.rollNo,std.Name,&std.cgpa);
    printf("Student Details : \nRoll No. = %d\nName = %s\nMarks = %f\n",std.rollNo,std.Name,std.cgpa);
}
