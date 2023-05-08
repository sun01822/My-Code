#include<stdio.h>
int main()
{
    int N,i;

    scanf("%d",&N);

    for(i=1; i<=100; i++){
        
        i % N;
        
        if(i % N == 3){
            printf("%d\n",i);
        }
    }

    return 0;

}