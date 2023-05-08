#include<stdio.h>
int main()
{
    int N,i,n,x,sum=0;

    scanf("%d",&N);

    for(i=1; i<=N; i++){
        scanf("%d",&x);
        if(x % 2 != 0){
            sum+=x;
        }
    }
    printf("Sum of all odd number: %d\n",sum);

    return 0;
}