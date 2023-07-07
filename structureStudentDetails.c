#include<stdio.h>
#include<string.h>

struct Students                 // stucture define . . 
{
  int rollNo ; 
  char name[100];
  float cgpa ;
};

void main()
{

// structure declaration . . 

    struct Students s1;               

    printf("Enter student roll number : ");
    scanf("%d",&s1.rollNo);

    printf("Enter student name : ");
    // fgets(s1.name ,100 , stdin);
    //puts(s1.name);
    scanf("%s",s1.name);

    printf("Enter student marks : ");
    scanf("%f",&s1.cgpa);

    printf("\n");

    printf("First Student details : \nroll Num = %d \nName = %s \nMarks = %f \n" , s1.rollNo , s1.name , s1.cgpa);

    printf("\n");

// array of structure . . 

    struct Students std[100];          

    std[0].rollNo = 1801;
    //std[0].name = "Rutika";
    strcpy(std[0].name , "Rutika" );
    std[0].cgpa = 9.02;

    printf("Second student details : \nRoll num : %d \nName : %s \nMarks : %f \n",std[0].rollNo,std[0].name,std[0].cgpa);
     
    printf("\n");


// Initializing Stucture  . . 

    struct Students s2 = {1802 , "seocjin" , 7.8};    

    printf("Third Student Details : \nRoll Num : %d \nName : %s \nMarks : %f \n" ,s2.rollNo,s2.name,s2.cgpa); 

    printf("\n");  

// Pointers to structure . . 

    struct Students s3 = {1804 , "jimin" ,8.76};
    struct Students *ptr = &s3;              // structure pointer . .
    
    printf("Forth Student Details : \nRoll num : %d \nName : %s \nMarks : %f \n",(*ptr).rollNo , (*ptr).name , (*ptr).cgpa);
    
    printf("\n");

// arrow operator . . 
    
    printf("Student Details : \nRoll num : %d \nName : %s \nMarks : %f \n", ptr->rollNo ,ptr->name ,ptr->cgpa);
    
    

    
}

