/* WAP to swap the value of two variables using the third variable (prog4.c) */
/* using third variable */ 
# include <stdio.h>
# include <conio.h>
int main()
{
int no1, no2, t;
printf("Enter two integer numbers:\n"); 
scanf("%d %d",&no1,&no2);
printf("Before swapping:\n");
printf("no1 = %d, no2 = %d\n",no1, no2); 
t = no1;
no1 = no2;
no2 = t;
printf("After swapping\n");
printf("no1 = %d , no2 = %d\n\n",no1, no2);
return 0;
}

