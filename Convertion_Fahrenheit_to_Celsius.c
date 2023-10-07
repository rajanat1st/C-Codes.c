// Program to convert Fahrenheit to Celsius.
#include<stdio.h>
int main()
{
	float f,c;
	printf("Enter Temperature in Fahrenheit: ");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("Temperature in Degree Celcius = %.2f",c);
}
