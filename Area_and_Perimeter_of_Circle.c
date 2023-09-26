// Write program to calculate the area and perimeter of a circle by reading the radius.
#include<stdio.h>
int main()
{
	float r,a,p,pi=3.142;
	printf("Enter the radius of the circle: ");
	scanf("%f",&r);
	a=pi*r*r;
	p=2*pi*r;
	printf("Area = %.2f square units\nPerimeter = %.2f units",a,p);
}
