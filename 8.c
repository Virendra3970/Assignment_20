//Write a program to claculate the sum of all elements in an array using poiters
#include<stdio.h>
int Sum(int *p,int size)
{
 int i,sum=0;
 for(i=0;i<size;i++)
 {
  sum=sum+ *(p+i);
 }
 return sum;
}

int main()
{
 int i,a[5];
 printf("\nEnter elements of the array: ");
 for(i=0;i<5;i++)
   scanf("%d",&a[i]);
 printf("\nSum is %d",Sum(a,5));
 return 0;
}
