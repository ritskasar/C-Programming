#include<stdio.h>

struct Student
{
   int rollNum ;
   char name[100];
   float cgpa ;
};

void printDetails(struct Student std);

void main()
{
    struct Student std ;

    printf("Enter student detail : \nEnter roll num and Enter name and Enter marks : \n");
    scanf("%d%s%f",&std.rollNum ,std.name ,&std.cgpa);

   printDetails(std);

}

void printDetails(struct Student std)
{
     printf("Roll Num : %d \nName : %s \nMarks : %f\n" , std.rollNum , std.name , std.cgpa);
}