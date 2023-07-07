#include<stdio.h>

void main()
{
    int age = 22;
    int *ptr = &age;
    int age1=*ptr;


// Value . . 
    printf("age : %d\n",age);
    printf("address of age : %u\n",*ptr);
    printf("age1 : %d\n",age1);


//address . . 

    printf("%p\n",*(&age));
    printf("%u\n",ptr);
    printf("%p\n",&ptr);
}