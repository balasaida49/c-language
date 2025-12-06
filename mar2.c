#include<stdio.h>
int main(){
    int i,j;
    int martrix[2][3];
    printf("enter 6 martrix elements:\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&martrix[i][j]);
        }
    }
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d\t",martrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}   

