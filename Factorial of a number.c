#include<stdio.h>
int main()
{
    int N, i;
    unsigned long long f = 1;

    scanf("%d",&N);

    for(i=1; i<=N; i++){
        f*=i;
    }
    printf("The factorial of %d! = %llu\n",N,f);

    return 0;
}