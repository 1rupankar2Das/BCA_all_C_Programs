/* function without argument and with return value */
#include<stdio.h>
#include<conio.h>
int add(void); 
int main()
{
int r;
printf("Finding Summation :\n\n");
r = add();
printf("Sum = %d\n\n",r);
}
int add(void) /* function definition */
{
int a, b;
printf("Enter value of a and b:\n");
scanf("%d %d",&a,&b);
return (a + b);
return 0;
}

