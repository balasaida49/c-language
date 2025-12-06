//program to enter marks from keyboard and display them
#include<stdio.h>
int main(){
    int marks[6];
    int i;
    //input marks from user
    for(i=0;i<6;i++){
        printf("Enter marks of student %d: ",i+1);
        scanf("%d",&marks[i]);
    }
    //display marks
    printf("The entered marks are:\n");
    for(i=0;i<6;i++){
        printf("%d\t",marks[i]);
    }
    return 0;
}