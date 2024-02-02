/* function with argument and without return value */
#include<stdio.h>
#include<conio.h>
void add(int,int);
int main()
{
int a, b;
printf("Finding Summation :\n\n");
printf("Enter value of a and b:\n");
scanf("%d %d",&a,&b);
add(a,b);
}
void add(int x, int y) /* function definition */
{
printf("\nSummation = %d\n",x+y);
}

