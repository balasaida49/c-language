//function wityhout arguments and with return type
#include<stdio.h>
int addition();
int main(){
    int result;
    result=addition();
    printf("Result=%d\n",result);
    return 0;
}
int addition(){
    int a,b,sum;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    return sum;
}