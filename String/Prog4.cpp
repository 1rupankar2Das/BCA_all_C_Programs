/* Program using strcpy() function */
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
char str1[20] = "Programming in C";
char str2[20];
strcpy(str2, str1);
printf("Output String:\n");
puts(str2);
return 0;
}

