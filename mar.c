#include<stdio.h>
int main(){
    int i,j;
    int martrix[2][3] = {{3,6,9},{2,4,6}};
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