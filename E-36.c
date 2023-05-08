#include<stdio.h>
int main()
{
    int x;

    printf("Enter the password: ");
    scanf("%d",&x);


    switch(x){
case 1234:
    printf("Correct Password\n");
    break;

default:
    printf("Incorrect Password\n");

    }

    return 0;

}
