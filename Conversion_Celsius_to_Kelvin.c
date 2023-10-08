// C Program to convert Celsius to Kelvin.
#include<stdio.h>
int main()
{
	float c,k;
	printf("Enter Temperature in Celsius: ");
	scanf("%f",&c);
	k=c+273.15;
	printf("Temperature in Kelvin = %.2f",k);
}