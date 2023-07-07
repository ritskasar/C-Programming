#include<stdio.h>

int swap(int x,int y);           // func-1 declaration . . 
int swap1(int *x , int *y);      // fun-2 declaration . .

void main()
{
    int a=3 , b=5;
    printf("a=%d & b=%d\n",a,b);      //values before swapping . . 
    swap1(&a, &b);                   // function-2 calling
    printf("a=%d & b=%d \n",a,b);    //values after swapping  . . 

}


// call by value ..
int swap(int x , int y)
{
    int t = x;
    x = y;
    y = t;

    //printf("x=%d  \ny=%d \n" , x , y);
}


// call by reference . . 
int swap1(int *x , int *y)

{
    int t = *x;
    *x = *y;
    *y = t;
}