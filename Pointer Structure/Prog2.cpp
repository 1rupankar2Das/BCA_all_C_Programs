/* Program using arithmetic operators with pointers */
#include<stdio.h>
#include<conio.h>
int main()
{
int num1, num2, *p1, *p2, var1;
num1 = 50;
num2 = 60;
p1 = &num1;
p2 = &num2;
printf("Address of num1 = %u \n",&num1);
printf("Address of num2 = %u\n",&num2);
printf("Address of p1 = %u \n",p1);
printf("Address of p2 = %u\n",p2);
var1 = *p1 + *p2;
printf("Sum = %d\n",var1);
var1 = *p1 - *p2;
printf("Difference = %d\n",var1);
var1 = *p1 * *p2;
printf("Product = %d\n",var1);
return 0;
}

