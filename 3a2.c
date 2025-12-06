#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter the value of i and j:");
    scanf("%d%d",&i,&j);
    j =(i++)+(++i);
    printf("The value of j is:%d",j);
    return 0;
}   