//Write a program to clculate the length of the string using a pointer
#include<stdio.h>
#include<string.h>
int Length(char *pw)
{
 int l,i;
 for(i=0;*(p+i);i++)
    l=i;
 return l;
 
}

int main()
{
 char str[50];
 printf("\Enter a string: ");
 fgets(str,50,stdin);
 printf("\nLength of %s is %d",str,Length(str));
 return 0;
}
