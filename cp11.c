// Write a program to compute the area of a triangle by reading base and height
#include"stdio.h"
int main()
{
	float b,h,a;
	printf("Enter the base of the triangle: ");
	scanf("%f",&b);
	printf("Enter the height of the triangle: ");
	scanf("%f",&h);
	a=.5*b*h;
	printf("Area = %.2f square units",a);
}
