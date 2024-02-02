/* program printing number pattern using for loop */
#include<stdio.h>
#include<conio.h>
int main()
{
 int i, j ;
 i = j = 0;
 printf("\tPrinting Number pattern ::\n");
 for(i =1; i<= 5 ; i++) 
 {
 for( j = 1; j<=i ;j++) 
 printf("%5d",i);
 printf("\n");
 return 0;
 }
}

