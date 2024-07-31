/**/
#include<stdio.h>
#include<conio.h>

void main()
{
     int a=10,*p,**x;
     clrscr();
     p=&a;
     x=&p;
     printf("%d",a);
     printf("%d",*p);
     printf("%d",**x);
     getch();
}