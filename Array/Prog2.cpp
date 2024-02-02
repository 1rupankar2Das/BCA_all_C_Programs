/* Program to scan 10 numbers and print the numbers in reverse order */
#include<stdio.h>
#include<conio.h>
int main()
{
int a[10] , i;
printf("Enter 10 values:\n");
for ( i=0; i < 10; i++)
scanf("%d",&a[i]);
printf("Printing array in reverse order:\n");
for(i = 9 ; i >= 0; i--)
printf("%4d", a[i]);
return 0;
}

