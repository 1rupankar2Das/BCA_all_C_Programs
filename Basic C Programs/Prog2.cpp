/* WAP to input days and print month and days (prog2.c) */
# include <stdio.h>
# include <conio.h>
int main()
{
int days, months; 
printf("Enter days:\n");
scanf("%d",&days);
months = days/30; 
days = days%30;
printf("Months = %d , Days = %d",months, days);
return 0;
}

