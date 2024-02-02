/* static variable */
#include <stdio.h>
#include <conio.h>
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
static int x = 0;
x++;
printf("%d\n", x); 
}

