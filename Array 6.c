#include<stdio.h>
int main()
{
    int a[5],i,sum = 0;


    printf("Enter the values of Array: \n");

    for(i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }


    for(i = 0; i < 5 ; i++){
        sum+=a[i];
    }


    printf("Sum of the Array: %d\n", sum);

    return 0;
}