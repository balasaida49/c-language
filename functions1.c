//function without arguments without return type
#include<stdio.h>
int main(){
    addition();
    addition();
    addition();
}
void addition(){
    int a,b,sum;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Sum=%d\n",sum);

 return 0;   
}