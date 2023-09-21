// Write a program to compute the area of a Trapezium by reading base1, base2 and height
#include<stdio.h>
int main()
{
	float b1,b2,h,a;
	printf("Enter the value of base1 of trapezium: ");
	scanf("%f",&b1);
	printf("Enter the value of base2 of trapezium: ");
	scanf("%f",&b2);
	printf("Enter the height of trapezium: ");
	scanf("%f",&h);
	a=(b1+b2)/2*h;
	printf("Area = %.2f square units",a);
}
