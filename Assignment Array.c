#include<stdio.h>
int main()
{
    int a[10],i,sum=0;


    for(i=0; i<10; i++){
        printf("Enter the number a[%d]: ",i);

        scanf("%d",&a[i]); 
        sum+=a[i];
     }

    printf("The sum of these number = %d\n",sum);

    return 0;

}