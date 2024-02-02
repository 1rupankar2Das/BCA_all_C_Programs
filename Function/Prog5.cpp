/* auto variable */
#include<stdio.h>
#include<conio.h>
int main()
{
int fun1(); 
fun1(); 
fun1(); 
fun1(); 
fun1(); 
}
void fun1()
{
auto int x = 0;
x++;
printf("%d\n", x); 
}

