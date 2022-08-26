//Write a program in C to demonstrate the how to handle the pointers in the program.
#include<stdio.h>
int main()
{
 int num;   // It is a integer variable

 int *p;    //It is a poiter which stores the addresss of a declaired variable. It's known as First Level pointer

 int **q;  // It is a poiter which stores the the address of First Level pointer. It's known as Second Level pointer

 int ***r; //It is a poiter which stores the address of Second Level Pointer . It's known as Third Level pointer

 p=&num;

 q=&p; r=&q;

 printf("\nEnter a number: ");

 scanf("%d ",p);        //Here, p stored the address of num. Therefore we do not need to write &num.

 printf(" n= %d ",*p);  //Here, p stored the address of num and *p ~num  Therefore we do not need to write num.
 
 printf("%d ",*q);      // *q~p
 
 printf("%d ",*r);      // *r~q
 
 return 0;
}
