//factorail of a number using recursion
#include<stdio.h>
int fact(int);
 int main(){
   int n,factorial;
    printf("Enter a number:\n");
    scanf("%d",&n);
    factorial=fact(n);
    printf("The factorail is %d",factorial);
 }
    int fact(int n)
    {
        int f;
        if(n==0){
            return 1;
        }
        f=n * fact(n-1);
        return f;
       
    }
        