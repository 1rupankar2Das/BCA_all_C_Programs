/* Program to scan 10 numbers and sort the elements in ascending order */
#include<stdio.h>
#include<conio.h>
int main()
{
int a[10] , i , j , temp;
printf("Enter 10 values:\n");
for( i = 0; i< 10 ; i++)
scanf("%d",&a[i]);
for( i =0; i < 10 ; i++)
{
for ( j = i+1; j < 10 ; j++)
{
if(a[i] > a[j])
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
}
printf("Printing sorted array:\n");
for(i = 0; i< 10; i++)
printf("%4d", a[i]);
return 0;
}
