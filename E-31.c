#include<stdio.h>
int main()
{
    int N,i;

    for(i=1;   ; i++){
        printf("Enter the number:");
        scanf("%d",&N);

        if(N > 0){
        if(N % 2 == 0){
            printf("Positive Even\n");
            }
        else{
            printf("Positive odd\n");
        }
        }

        else if(N < 0){
            if(N % 2 == 0){
            printf("Negative Even\n");
            }
        else{
            printf("Negative odd\n");
        }
        }

        else{
            printf("The number is zero!\n");
        }
    }

    return 0;

}