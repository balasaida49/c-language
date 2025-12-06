// call by reference
#include <stdio.h>
void swap(int *,int *);
int main()
{
    int a,b;
    printf("enter a and b values:\n");
    scanf("%d%d",&a,&b);
    printf("before swapping:a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("in main funtion after swapping:a=%d b=%d\n",a,b);

}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("in swap function after swapping:a=%d b=%d\n",*a,*b);
}
