// C Program to convert Kelvin to Celsius.
#include<stdio.h>
int main()
{
	float k,c;
	printf("Enter Temperature in Kelvin: ");
	scanf("%f",&k);
	c=k-273.15;
	printf("Temperature in Celsius = %.2f",c);
}