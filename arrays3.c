//program to find total marks and persentage of marks
#include<stdio.h>
int main(){
    int i,marks[6],per,sum=0;
    for (i=0;i<6;i++){
        printf("Enter marks of student %d: ",i+1);
        scanf("%d",&marks[i]);
     
    }
    for (i=0;i<6;i++){
        sum=sum+marks[i];
    }
    per = (sum*100)/600;
    printf("Total marks = %d\n",sum);
    printf("the persentage is %d",per);
    return 0;
}