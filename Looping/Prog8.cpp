/*program printing number pattern 1 using for loop */
# include<stdio.h>
#include<conio.h>
int main()
{
 int i, j , k = 1;
 i = j = 0;
 printf("\tPrinting Number pattern ::\n");
 for(i =1; i<= 7 ; i++)
 {
 for(j = 1; j<=i ;j++)
 printf("%5d",k++);
 printf("\n");
 }
 return 0;
}

