// Write a C program to multiply two floating point numbers.
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter two floating-point numbers (with 2 decimal numbers): ");
	scanf("%f%f",&a,&b);
	c=a*b;
	printf("%.2f X %.2f = %.2f",a,b,c);	
}