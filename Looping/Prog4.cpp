/* program using Nested for loop */
#include<stdio.h>
#include<conio.h>
int main()
{
 int i, j ;
 i = j = 0;
 printf("\tPrint Table from 1 to 5::\n\n");
 for(i =1; i<= 10; i++)
 {
 for(j=1; j<=5; j++)
 printf("%5d",i*j);
 printf("\n");
 }
return 0;
}

