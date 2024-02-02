/* prog22.c */
#include<stdio.h>
#include<conio.h>
int main()
{
 int f1, f2, f3, i;
 f1 = 1;
 f2 = 1;
 f3 = 0;
 printf("%4d %4d", f1, f2);
 for(i = 1; i<=8;i++)
 { 
 f3 = f1 + f2;
 printf("%4d",f3);
 f2 = f1;
 f1 = f3;
 return 0;
 }
}

