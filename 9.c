//Write a progrma to print the elements in reverse order
#include<stdio.h>
int main()
{
 int a[5],i,*p=a;
 printf("\Enter the elements of the array: ");
 for(i=0;i<5;i++)
   scanf("%d",(p+i));
 for(i=4;i>=0;i--)
    printf("%d ",*(p+i));
 return 0;
}
