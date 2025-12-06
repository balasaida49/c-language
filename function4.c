//function with orgument and with return type
#include<stdio.h>
int main(){
    int result,a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    result=addition(a,b);
    printf("Result=%d\n",result);
}
int addition(int x,int y){
    int c;
    c=x+y;
    return c;
}