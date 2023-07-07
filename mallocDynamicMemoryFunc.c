#include<stdio.h>
#include<stdlib.h>            

void main()
{
   
    int n;             //size of array . .
    printf("Enter size of memory :");
    scanf("%d",&n);

    int arr[n];              //array of numbers
    printf("Enter %d numbers into array : " , n);

    for(int i=0 ; i<n ;i++)
    {
        scanf("%d",&arr[i]);     // input array numbers  . .
    }
    
    int *ptr = &arr[n];           // array pointer . . 

    ptr = (int *) malloc(5 * sizeof(int));        // malloc function . . . 

    printf("Enter again numbers into array :");


    for (int  i = 0; i < ptr[i]; i++)
    {
        scanf("%d" ,&ptr[i]);
    }

    for(int i=0 ; i<ptr[i]; i++)
    {
        printf("%d " ,ptr[i]);           // print numbers
    }

}