/* WAP to apply the different arithmetic operators (prog6.c) */
# include <stdio.h> 
# include <conio.h> 
int main()
{
int no1, no2, sum , sub, multi , div , mdiv; 
printf("Enter two integer numbers:\n"); 
scanf("%d %d",&no1, &no2);
sum = no1 + no2; 
sub = no1 - no2; 
multi = no1 * no2; 
div = no1 / no2;
mdiv = no1 % no2;
printf("Sum = %d\n",sum); 
printf("Difference = %d\n",sub); 
printf("Product = %d\n",multi);
printf("Quotient of division = %d\n",div);
printf("Remainder of division = %d\n",mdiv);
return 0;
}
