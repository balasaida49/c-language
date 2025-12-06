//local variables
#include <stdio.h>
void display();
int main()
    {
        int x=2;//local variable
        printf("value of x in main=%d\n",x);
        display();
        printf("value of y is %d\n",x);//error


    }
    void display(){
        int y=3;//local variable
        printf("value of y in display=%d\n",y);
    }
