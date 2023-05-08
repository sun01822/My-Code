#include<stdio.h>
int main()
{
    int speed,ram,N,i,s,a;
    double r=0.0,sum=0;
    
    
    printf("Enter what speed you use: ");
    scanf("%d",&speed);


    printf("Enter 1 for mbps and 2 for kbps: ");
    scanf("%d",&a);

    switch(a){
        case 1:
        s = speed * 1000;
        printf("speed = %d kbps\n",s);
        break;


        case 2:
        s = speed;
        printf("speed = %d kbps\n",s);
        break;

    }

    printf("Enter the amount of device you have: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++){
    printf("Enter the RAM of your device: ");
    scanf("%d",&ram); 
    sum+=ram;

    r = (s / sum) * ram;

    printf("The device of %dGB RAM get = %.2lf\n",ram,r);

    }

    return 0;

}