#include<stdio.h>
int main()
{
    int N, i, n=0;
    double x, sum=0.0, average=0.0;

    scanf("%d",&N);

    printf("Enter integer: ");

    for(i=1; i<=N; i++){
        scanf("%lf",&x);

        if(x>0){
            sum+=x;
            n++;
        }
        average = sum / n;

    }
    printf("Number of positive numbers: %d\n",n);

    printf("Average = %.2lf\n", average);


    return 0;


}