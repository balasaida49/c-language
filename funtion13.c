//declaration of function
#include <stdio.h>
void counter();
int main()
{
    counter();
    counter();
    counter();
}
void counter()
{
    int c=0;//auto storage
    c++;
    printf("%d\n",c);
}