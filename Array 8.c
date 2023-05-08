#include<stdio.h>
int main()
{
    float a[5],b[5],ab[5];

    int i;


    printf("Enter the value of A:\n");
    for(i = 0; i<5; i++){
        scanf("%f",&a[i]);
    }


     printf("Enter the value of B:\n");
    for(i = 0; i<5; i++){
        scanf("%f",&b[i]);
    }


     for(i = 0; i<5; i++){
       ab[i] = a[i] + b[i];
    }




    for(i = 0; i < 5; i++){
        printf("AB = %.2f\n",ab[i]);
    }



    return 0;

}