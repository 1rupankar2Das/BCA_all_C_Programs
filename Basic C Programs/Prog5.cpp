/* WAP to swap the value of two variables without using third variable (prog5.c) */ 
# include <stdio.h>
# include <conio.h> 
int main()
{
int no1, no2; 
printf("Enter two integer numbers:\n"); 
scanf("%d %d",&no1,&no2); 
printf("Before swapping:\n");
printf("no1 = %d, no2 = %d\n",no1, no2); 
no1 = no1 + no2;
no2 = no1 - no2; 
no1 = no1 - no2;
printf("After swapping\n");
printf("no1 = %d , no2 = %d",no1, no2);
return 0;
}

