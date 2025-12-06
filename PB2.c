// swap two numbers without using third variable 
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter A and B : ");
    scanf("%d%d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After Swapping A = %d And B = %d",a,b);
    return 0;

}