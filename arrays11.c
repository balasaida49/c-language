// program to enter markes from  keyboard and print using array
#include<stdio.h>
int main(){
    int i,markes[6];
    for(i=0;i<6;i++)
    {
        printf( "enter sub %d",i+1);
        scanf("%d",&markes[i]);

    }
    for(i=0;i<6;i++)
    {
        printf("%d\t",markes[i]);
    }
}