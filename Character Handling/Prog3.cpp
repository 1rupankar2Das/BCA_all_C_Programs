/* C example program of toupper() and tolower() .*/
#include<stdio.h>
#include<ctype.h>
#include <conio.h>
int main()
{
char ch;
printf("Enter a character: ");
scanf("%c",&ch);
if(islower(ch))
printf("Upper case: %c", toupper(ch));
else
printf("Lower case: %c\n",tolower(ch));
return 0;
}

