//global variables
#include <stdio.h>
int y=3;//global variable
void display();
int main()
    {
        int x=2;//local variable
        printf("value of x in main=%d\n",x);
        printf("value of y in main=%d\n",y);
        display();
    }
    void display(){
       
        printf("value of y in display=%d\n",y);
    }