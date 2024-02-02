/* Program to find the highest and lowest value within an array */
#include<stdio.h>
#include<conio.h>
int main()
{
int a[10] , i , high , low;
printf("Enter 10 values:\n");
for ( i = 0 ; i < 10 ; i++)
scanf("%d",&a[i]);
high = low = a[0];
for ( i = 1; i< 10 ; i++)
{
if ( a[i] > high)
high = a[i];
if (a[i] < low)
low = a[i];
}
printf("Highest value = %d\n",high);
printf("Lowest value = %d\n", low);
return 0;
}

