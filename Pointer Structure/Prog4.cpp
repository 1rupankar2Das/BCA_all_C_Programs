/* program using structure */
#include<stdio.h>
#include<conio.h>
struct student
{
int roll;
char name[20];
int age;
};
int main()
{
struct student std1;
printf("Enter Roll no:\n");
scanf("%d",&std1.roll);
printf("Enter name:\n");
scanf("%s",std1.name);
printf("Enter Age:\n");
scanf("%d",&std1.age);
printf("Student's Details\n");
printf("Roll = %d\nName = %s\nAge = %d\n",std1.roll,std1.name,std1.age);
return 0;
}

