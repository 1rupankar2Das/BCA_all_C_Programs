/* program using do…while loop */
#include<stdio.h>
#include<conio.h>
int main()
{
 int i=1 , j=0 ;
 printf("Enter value of j:\n");
 scanf("%d",&j);
 do
 {
 printf("value of i = %d\n", i);
 i++;
 }while(i <= j);
 return 0;
 }

