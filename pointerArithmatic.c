#include<stdio.h>
void main()
{
    int age = 22;
    int age1 = 25;
    int *ptr = &age;       // pointer 1
    int *ptr1 = &age1;      //pointer 2

    printf("%u\n",ptr);
    ptr++;                  // increment of pointer 
    printf("%u\n",ptr);
    printf("%u\n",ptr1);

    printf("%u %u Difference of pointer : %u\n",ptr,ptr1,ptr-ptr1);   // difference of two pointer 
    ptr1 = &age;
    printf("Comparison is : %u\n",ptr == ptr1);          // comparison of two pointer
}