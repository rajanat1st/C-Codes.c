// C Program to convert Kelvin to Fahrenheit.
#include<stdio.h>
int main()
{
	float k,f;
	printf("Enter the temperature in Kelvin: ");
	scanf("%f",&k);
	f=(k-273.15)*(9/5.0)+32;
	printf("Temperature in Fahrenheit = %.2f",f);
}