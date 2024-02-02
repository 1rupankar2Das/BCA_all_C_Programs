/* program to scan values in a 3x3 matrix and print the elements */
#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j , arr[3][3] ;
 printf("Enter 9 numbers::\n\n");
 for(i =0; i< 3 ; i++)
 {
 for(j=0;j<3;j++)
 scanf("%d",&arr[i][j]);
 }
 printf("Printing 2 Dim Array::\n\n");
 for(i =0; i< 3 ; i++)
 {
 for(j=0;j<3;j++)
 printf("%5d",arr[i][j]);
 printf("\n\n");
 return 0;
 }
}

