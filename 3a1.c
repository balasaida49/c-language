// 1a
#include<stdio.h>
int main()
{
    int a,b,c,d;
    float result;
    printf("Enter a,b,c and d values:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    result = a/b*c-b+a*d/3;
    printf("The Result is:%f",result);
    return 0;                                                   
   
}