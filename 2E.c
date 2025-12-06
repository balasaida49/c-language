#include<stdio.h>
int main()
{
    float u,t,a,d;
    printf("ENTER INITIAL VELOCITY : ");
    scanf("%f",&u);
    printf("ENTER TIME : ");
    scanf("%f",&t);
    printf("ENTER ACCELERATION : ");
    scanf("%f",&a);
    d = u*t+0.5*(a*t*t);
    printf("THE SPEED OF THE OBJECT IS : %.2f",d);
    return 0;

}