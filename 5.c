//Write a program to find the maximum number b/w two numbers using a pointer
#include<stdio.h>
int Greatest(int *p,int *q)
{
 if(*p>*q)
   return *p;
 else
   return *q;
}
int main()
{
 int a,b,g;
 printf("\nEnter two numbers: ");
 scanf("%d%d",&a,&b);
 g=Greatest(&a,&b);
 printf("\nGreatest Number is %d",g);
 return 0;
}
