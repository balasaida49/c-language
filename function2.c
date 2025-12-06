//function with orgument and without return type
#include<stdio.h>
void addition(int,int);
int a,b;
int main(){
   
   printf("Enter two numbers\n");
   scanf("%d%d",&a,&b);
   addition(a,b);
}
void addition(int x,int y){
    int c;
    c=x+y;
    printf("c=%d\n",c);
    return 0;

}