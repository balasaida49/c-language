

#include <stdio.h>
int main()
{
 int x;
 float y;
 char ch;
 char s[100];
 printf("enter a integer : ");
 scanf("%d",&x); 
 printf("enter a floating : ");
 scanf("%f",&y);
 printf("enter a character : ");
 scanf("\n");
 scanf("%ch",&ch);
 printf("enter a string : ");
 scanf("%s",s);
 printf("your integer is %d\n",x);
 printf("your floting number is %f\n",y);
 printf("your charachter is %c\n",ch);
 printf("your string is %s\n",s);
 
return 0 ;

}