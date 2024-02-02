/* global variable and local variable */
#include<stdio.h>
#include<conio.h>
int x = 0;
void fun1();
void fun2();
void fun3();
int main()
{
int x = 25;
printf("Local variable value of x = %d\n",x);
fun1();
fun2();
fun3();
printf("Local variable value of x = %d\n",x);
}
void fun1()
{
x++;
printf("value of x = %d\n",x);
}
void fun2()
{
x++;
printf("value of x = %d\n",x);
}
void fun3()
{
x++;
printf("value of x = %d\n",x);
}

