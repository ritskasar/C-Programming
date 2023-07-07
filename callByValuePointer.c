#include<stdio.h>

int printAddress(int n);

void main()
{
    int n=5;
    printf("%u\n",&n);
    printAddress(n);

}

int printAddress(int n)
{
    printf("%u\n",&n);
}