/* function without arguments and without return value */
#include<stdio.h>
#include<conio.h>
void add(void);
int main()
{
printf("Finding Summation :\n\n");
add();
}
void add(void) /* function definition */
{
int a, b;
printf("Enter value of a and b:\n");
scanf("%d %d",&a,&b);
printf("\n Summation = %d\n",a + b);
}

