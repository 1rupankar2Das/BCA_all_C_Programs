#include<stdio.h>
#include<conio.h>
int main()
{
int x, y;
printf("Enter value of x:\n");
scanf("%d",&x);
y = ( x == 0) ? 0 : (( x > 0) ? 1 : -1);
printf("x = %d , y = %d\n", x, y);
return 0;
}

