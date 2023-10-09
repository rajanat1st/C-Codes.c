// C Program to convert Fahrenheit to Kelvin.
#include<stdio.h>
int main()
{
	float f,k;
	printf("Enter the temperature in Fahrenheit: ");
	scanf("%f",&f);
	k=(f-32)*(5/9.0)+273.15;
	printf("Temperature in Kelvin = %.2f",k);
}