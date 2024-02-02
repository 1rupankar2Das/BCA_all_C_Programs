#include<stdio.h>
#include<conio.h>
int main()
{
int max , min, a, b, c, sum = 0;
printf("Enter three number:");
scanf("%d %d %d", &a, &b, &c);
if( a > b && a > c)
max = a;
else if( b > a && b > c)
max = b;
else
max = c;
if ( a < b && a < c)
min = a;
else if ( b < a && b < c)
min = b;
else
min = c;
sum = a+b+c;
printf("Max = %d , Min = %d, Sum = %d", max, min, sum);
return 0;
}

