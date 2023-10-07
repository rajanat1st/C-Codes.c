// Program to convert Celsius to Fahrenheit.
#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter Temperature in Celsius: ");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("Temperature in Fahrenheit  = %.2f",f);
}