//Write a function in C to sort an array of int type values.
#include<stdio.h>
void sort(int *p,int size)
{
 int i,j,temp;
 for(i=0;i<size;i++)
 {
  for(j=i+1;j<size;j++)
  {
   if(*(p+i)>*(p+j))
   {
    temp=*(p+i);
    *(p+i)=*(p+j);
    *(p+j )=temp;
   }
  }
 }
 
}
int main()
{
 int a[20], *p=a,i;
 printf("\nEnter the values of array: ");
 for(i=0;i<10;i++)
   scanf("%d",(p+i));
 sort(a,10);
 printf("Sorted array: ");
 for(i=0;i<10;i++ )
  printf("%d ",*(p+i));
 return 0;
}
