#include<stdio.h>

int CalculatePrice(float value);
void main()
{
    float value = 100.00;
    CalculatePrice(value);
    
}

int CalculatePrice(float value)
{
    value = value + (value*0.18);
     printf("Final price is = %f\n",value);
    return(value);
}