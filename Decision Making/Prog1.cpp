/* enter 2 numbers and find the larger number */
#include<stdio.h>
#include<conio.h>
int main()
{
int a, b;
printf("Enter 2 numbers:\n");
scanf("%d %d",&a,&b); 
if(a > b) 
printf("a = %d is the larger number",a);
else
printf("b = %d is the larger number",b);
return 0;
}
