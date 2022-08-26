//Write a program to count the count the number of vowels and consonants in a string using a poiter.
#include<stdio.h>
#include<string.h>
int main()
{
 char str[50],*q=str;
 int l, i,vowel=0,count=0,t=0;
 printf("\nEnter a string: ");
 fgets(q,50,stdin);
 for(i=0;*(q+i);i++)
 {
  if(*(q+i)=='a' || *(q+i)=='e' || *(q+i)=='i' || *(q+i)=='o' || *(q+i)=='u' || *(q+i)=='A' || *(q+i)=='E' || *(q+i)=='I' || *(q+i)=='O' || *(q+i)=='U' )
    vowel++;
 }
 for(i=0;*(q+i);i++)
 {
  if(*(q+i)==' ')
     t++;
 }
 l=strlen(q);
 count=l-vowel-t-1;
 printf("\nNo of vowels %d",vowel);
 printf("\nNo of consonant %d",count);
 return 0;
 
}
