/* WAP to print the area and perimeter of rectangle and area and circumference of circle (prog3.c) */
# include <stdio.h>
# include <conio.h>
int main()
{
float r, ac, ar, c, l, b, peri; 
printf("Enter radius of circle:\n");
scanf("%f",&r);
printf("Enter Length and Breadth of rectangle:\n"); 
scanf("%f %f",&l,&b);
ac = 3.14 * r * r; 
ar = l * b;
c = 2 * 3.14 * r; 
peri = 2 * (l + b);
printf("The area of circle = %f\n", ac);
printf("Circumference of circle = %f\n", c);
printf("Area of rectangle = %f\n",ar);
printf("Perimeter of rectangle = %f\n",peri);
return 0;
}

