/* Program using Pointer */
#include<stdio.h>
#include <conio.h>
int main()
{
int a = 5;
int *ptr = &a;
printf("Address of ptr = %u",ptr);
printf("\n\nValue of variable pointer by ptr = %d",*ptr);
return 0;
}

