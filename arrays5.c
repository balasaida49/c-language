//program to enter matrix from keyboard and display it
#include<stdio.h>
int main(){
    int matrix[3][3];
    int i,j;
    //input matrix elements from user
    printf("Enter elements of 3x3 matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    //display matrix
    printf("The entered matrix is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}