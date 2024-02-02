/* enter 10 numbers and find even and odd */
#include<stdio.h>
#include<conio.h>
int main()
{
 int a, i;
printf("Enter 10 numbers:\n");
for(i=0; i<10; i++) 
{
scanf("%d",&a);
if(a % 2 == 0)
printf("%d is even number\n",a);
else
printf("%d is Odd number\n",a);
return 0;
}
}

