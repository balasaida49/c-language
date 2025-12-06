#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r,si,ci;
    printf("ENTER PRINCIPLE AMOUNT,TIME & RATE OF INTREST");
    scanf("%f%f%f",&p,&t,&r);
    si = p*t*r/100;
    ci = p*pow(1+r/100,t)-p;
    printf("THE SIMPLE INTEREST IS : %f\n",si);
    printf("THE COMPOUND INTEREST IS : %f\n",ci);
}