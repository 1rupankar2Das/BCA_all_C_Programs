/* function with arguments and return value */
#include<stdio.h>
#include<conio.h>
int add(int, int); 
int main()
{
int r, a, b;
printf("Finding Summation :\n\n");
printf("Enter value of a and b:\n");
scanf("%d %d",&a,&b);
r = add(a,b);
printf("Sum = %d\n\n",r);
}
int add(int x, int y) /* function definition */
{
return (x + y);
return 0;
}

