/* enter 3 numbers and find the largest number */
#include<stdio.h>
int main()
{
int a, b, c;
printf("Enter 3 numbers:\n");
scanf("%d %d %d",&a,&b,&c); 
if(a > b)
{
if(a > c)
printf("a = %d is the largest",a);
else
printf("c = %d is the largest",c); 
}
else
{
if(b > c)
printf("b = %d is the largest",b);
else
printf("c = %d is the largest",c);
return 0;
} 
}

