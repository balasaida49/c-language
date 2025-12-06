//swap two numbers using third variable
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter A and B : ");
    scanf("%d%d",&a,&b);
    c = a;
    a = b;
    b = c;
    printf("After Swapping A = %d and B = %d",a,b);

    return 0;


}