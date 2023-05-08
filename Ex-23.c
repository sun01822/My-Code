#include<stdio.h>
int main()
{
    double x, y, z, P;

    printf("\nEnter the first number: ");
    scanf("%lf",&x);

    printf("\nEnter the second number: ");
    scanf("%lf",&y);

    printf("\nEnter the second number: ");
    scanf("%lf",&z);

    if(x < (y+z) && y < (x+z) && z < (y+x)){

        P = x + y + z;

        printf("\nPerimeter = %.lf\n",P);
    }

    else{
        printf("Not possible to create a triangle..!\n");
    }

    return 0;

}