#include<stdio.h>
int main()
{
    int a[5],b[5],ab[5],i;

    for(i=0; i<5; i++){
        printf("Enter the value of A:");
        scanf("%d",&a[i]);
    }

    printf("\n");

    for(i=0; i<5; i++){
        printf("Enter the value of B:");
        scanf("%d",&b[i]);
    }

    for(i=0; i<5; i++){
        ab[i] = a[i] + b[i];
    }

    printf("\n");
    for(i=0; i<5; i++){
        printf("The value of AB: %d\n",ab[i]);
    }

    return 0;
}