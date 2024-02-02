#include<stdio.h>
#include<conio.h>
int main()
{
int no, rem;
printf("Enter a +ve number:");
scanf("%d",&no);
if (no <= 0)
printf("%d is not a +ve number\n");
else
{
rem = no % 2;
if (rem == 0)
printf("%d is an Even number",no);
else
printf("%d is an Odd number",no);
}

