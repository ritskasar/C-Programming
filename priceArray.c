#include<stdio.h>

void main()
{
    float price[3];

    printf("Enter three price : \n");
    scanf("%f%f%f",&price[0],&price[1],&price[2]);

    printf("Total price of price-1 : %f\n",price[0]+(0.18*price[0]));
    printf("Total price of price-2 : %f\n",price[1]+(0.18*price[1]));
    printf("Total price of price-3 : %f\n",price[2]+(0.18*price[2]));
   
}