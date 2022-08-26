//A C function to swap strings of two char of calling functions.
#include<stdio.h>
#include<string.h>
void swap(char *p,char *q)
{
 char str[20];
 strcpy(str,p);
 strcpy(p,q);
 strcpy(q,str);
 
}
int main()
{
 char s[50],s1[50];
 printf("\nEnter the first string: ");
 fgets(s,50,stdin);
 printf("\nEnter the second string: ");
 fgets(s1,50,stdin);
 swap(s,s1);
 printf("\n First String => %s and Second String => %s",s,s1);
 return 0;
}
