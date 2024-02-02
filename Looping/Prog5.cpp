/* program using break within for loop */
/* program to scan 6 number and find sum , but loop 
breaks as soon as the input is 1 */
#include<stdio.h>
#include<conio.h>
int main()
{
 int i= 0, no=0, sum =0 ;
 for(i =1; i<= 6 ; i++)
 {
 printf("Enter a number ::\n");
 scanf("%d",&no);
 if (no == 1)
 break;
 sum += no;
 }
 printf("Sum = %d\n\n", sum);
 return 0;
}

