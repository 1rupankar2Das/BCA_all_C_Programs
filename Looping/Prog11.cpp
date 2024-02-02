#include<stdio.h>
#include<conio.h>
int main()
{
int rev = 0, n , rem , sum =0;
printf("Enter a 4 digit number:\n");
scanf("%d",&n);
if ( n <= 9999 )
{
do
{ 
rem = n % 10 ;
sum += rem;
rev = (rev * 10) + rem ;
n = n/10;}while(n > 0);
printf("\n Reverse No:= %d\n");
printf("\n Summation = %d\n",sum);
}
else
printf("It is not a 4 digits number");
return 0;
}

