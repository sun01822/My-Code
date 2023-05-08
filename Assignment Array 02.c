#include<stdio.h>
int main()
{
    int id[30];
    float cgpa[100];
    double salary[50];
    long int a[40];

    printf("The size of int = %d bytes\n", sizeof(id));
    printf("The size of float = %d bytes\n", sizeof(cgpa));
    printf("The size of double = %d bytes\n", sizeof(salary));
    printf("The size of long int = %d bytes\n", sizeof(a));


    return 0;
}