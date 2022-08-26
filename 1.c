//A C program to swap two numbers by using pointers
#include<stdio.h>
void swap(int *a,int *b)
{
 int t;
 t=*a;
 *a=*b;
 *b=t;
 
}
int main()
{
 int a,b;
 printf("\nEnter two umbers: ");
 scanf("%d%d",&a,&b);
 swap(&a,&b);
 printf(" a=%d b=%d ",a,b);
 return 0;
}
