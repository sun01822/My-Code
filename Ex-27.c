#include<stdio.h>
int main()
{
    int N,i,x,n=0,p=0;

    scanf("%d",&N);

    for(i=1; i<=N; i++){
        scanf("%d",&x);
        if(x>0){
            n++;
        }
        if(x<0){
            p++;
        }
    }
   printf("Number of positive numbers: %d\nNumber of negative numbers: %d\n",n,p);


    return 0;
}