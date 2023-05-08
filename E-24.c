#include<stdio.h>
int main()
{
    int x,y;
    printf("\nInput the first number: ");
    scanf("%d",&x);

    printf("Input the second number: ");
    scanf("%d",&y);

    if(x>y){

        int p;
        p = x;
        x = y;
        y = p;
    }

    if((y % x)==0){
        printf("\nMultiplied\n");
    }
    else{
        printf("\nNot Multiplied\n");
    }

    return 0;
}