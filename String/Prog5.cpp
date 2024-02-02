/* program using strcmp() function with string */
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
char str1[] = "abcd", str2[] = "abcd", str3[] = "quty";
int result;
result = strcmp(str1, str2);
if(result == 0)
printf("str1 and str2 are Equal\n");
else
printf("str1 and str2 are not Equal\n");
result = strcmp(str1, str3);
if(result == 0)
printf("str1 and str3 are Equal\n");
else
printf("str1 and str3 are not Equal\n");
return 0;
}

