#include<stdio.h>
int main()
{
    int a,b,c;
    
    printf("Enter the value of a:");
    scanf("%d",&a);
    
    for(c=1; c<=a; c++){
        
        for(b=c; b>=1; b--){
            
            printf(" ");
        }
        
        printf("%d\n",c);
    }
    
    return 0;
    
}