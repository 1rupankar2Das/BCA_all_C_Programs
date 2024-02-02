/* program to scan 5 numbers in an array and print the elements*/
#include<stdio.h>
#include<conio.h>
int main()
{
int i, arr[5] ;
printf("Enter 5 numbers::\n\n");
for(i =0; i< 5 ; i++)
{
scanf("%d",&arr[i]);
}
printf("Printing Array::\n");
for(i =0; i<5 ; i++)
{
printf("%d\n",arr[i]);
return 0;
}
}

