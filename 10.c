//Write a program to print string in reverse using a pointer
#include<stdio.h>
#include<string.h>
int main()
{
 char str[50],*p=str;
 int i,j;
 printf("\nEnter a string: ");
 fgets(p,50,stdin);
 for(i=0;*(p+i);i++)
 {
  j=i;
 }
 for(i=j;i>=0;i--)
   printf("%c",*(p+i));
 return 0;
 
}
