/* program using continue within for loop */
/* program to print from 1 to 15 skipping 7 to 10 */
#include<stdio.h>
#include<conio.h>
int main()
{
 int i= 0 ;
 printf("\t 7 to 10 not printed\n\n");
 for(i =1; i<= 15 ; i++)
 {
 if(i >2 && i <6)
 continue;
 printf("Number = %d\n", i);
 }
return 0;
}

