#include<stdio.h>
int main()
{
    float a[5];

    int i;

    for(i = 0; i<5; i++){
        scanf("%f",&a[i]);
    }
    
    
    for(i = 0; i<5; i++){
     printf("%.2f\n", a[i]);

    }
    return 0;
}