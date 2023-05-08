#include<stdio.h>
int main()
{
    int a[5],i,odd_sum = 0, even_sum = 0;

    printf("Enter the element of Array: ");

    for(i=0; i<5; i++){

        scanf("%d",&a[i]);
    }

    printf("Element of array are =");
    for(i=0; i<5; i++){

        printf("%d ",a[i]);

        if(a[i] % 2 != 0){
        odd_sum+=a[i];
        }
        else{
            even_sum+=a[i];
        }
    }

    printf("\nSum of odd number is: %d\n",odd_sum);
    printf("Sum of even number is: %d\n",even_sum);


    return 0;

    
}