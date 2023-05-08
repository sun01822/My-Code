#include<stdio.h>
int main()
{
    int a,b,c;
    
    scanf("%d",&a);
    
    for(c=a; c>=1; c--){
        
        for(b=c; b>=1; b--){
            
            printf(" ");
        }
        
        printf("%d\n",c);
    }
    
    return 0;
    
}